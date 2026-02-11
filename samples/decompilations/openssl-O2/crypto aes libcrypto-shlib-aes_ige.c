
void AES_ige_encrypt(uchar *in,uchar *out,size_t length,AES_KEY *key,uchar *ivec,int enc)

{
  byte *pbVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  uchar *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong extraout_RDX;
  uchar *unaff_RBX;
  ulong *puVar10;
  uchar *puVar11;
  char *pcVar12;
  ulong *puVar13;
  char *pcVar14;
  undefined4 in_register_0000008c;
  ulong *puVar15;
  AES_KEY *unaff_R12;
  ulong *out_00;
  long in_FS_OFFSET;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  long lStack_d8;
  uchar *puStack_c8;
  uchar *puStack_c0;
  AES_KEY *pAStack_b8;
  uint uStack_90;
  ulong local_58;
  ulong uStack_50;
  long local_40;
  
  puVar10 = (ulong *)CONCAT44(in_register_0000008c,enc);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (length == 0) {
LAB_00100145:
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
LAB_0010039d:
    OPENSSL_die("assertion failed: (length % AES_BLOCK_SIZE) == 0","crypto/aes/aes_ige.c",0x3c);
  }
  else if ((uint)enc < 2) {
    if ((length & 0xf) == 0) {
      uVar9 = length >> 4;
      if (enc == 1) {
        if (in == out) {
          uVar16 = *(ulong *)ivec;
          uVar17 = *(ulong *)(ivec + 8);
          uVar18 = *(ulong *)(ivec + 0x10);
          uVar19 = *(ulong *)(ivec + 0x18);
          if (uVar9 != 0) {
            puVar10 = (ulong *)out;
            uVar20 = uVar18;
            uVar21 = uVar19;
            do {
              puVar8 = puVar10 + 2;
              uVar18 = *(ulong *)in;
              uVar19 = *(ulong *)((long)in + 8);
              in = (uchar *)((long)in + 0x10);
              local_58 = uVar16 ^ uVar18;
              uStack_50 = uVar17 ^ uVar19;
              AES_encrypt((uchar *)&local_58,(uchar *)&local_58,key);
              uVar16 = uVar20 ^ local_58;
              uVar17 = uVar21 ^ uStack_50;
              *puVar10 = uVar16;
              puVar10[1] = uVar17;
              puVar10 = puVar8;
              uVar20 = uVar18;
              uVar21 = uVar19;
              local_58 = uVar16;
              uStack_50 = uVar17;
            } while (puVar8 != (ulong *)(out + uVar9 * 0x10));
          }
          *(ulong *)ivec = uVar16;
          *(ulong *)(ivec + 8) = uVar17;
          *(ulong *)(ivec + 0x10) = uVar18;
          *(ulong *)(ivec + 0x18) = uVar19;
        }
        else {
          puVar10 = (ulong *)(ivec + 0x10);
          puVar5 = ivec;
          if (uVar9 != 0) {
            uVar16 = *(ulong *)ivec;
            uVar17 = *(ulong *)(ivec + 8);
            puVar8 = (ulong *)in;
            puVar13 = (ulong *)out;
            do {
              uVar18 = puVar8[1];
              puVar15 = puVar13 + 2;
              *puVar13 = uVar16 ^ *puVar8;
              puVar13[1] = uVar17 ^ uVar18;
              AES_encrypt((uchar *)puVar13,(uchar *)puVar13,key);
              uVar16 = *puVar10 ^ *puVar13;
              uVar17 = puVar10[1] ^ puVar13[1];
              *puVar13 = uVar16;
              puVar13[1] = uVar17;
              puVar10 = puVar8;
              puVar8 = puVar8 + 2;
              puVar13 = puVar15;
            } while (puVar15 != (ulong *)(out + uVar9 * 0x10));
            lVar4 = (uVar9 - 1) * 0x10;
            puVar10 = (ulong *)(in + lVar4);
            puVar5 = out + lVar4;
          }
          uVar2 = *(undefined8 *)(puVar5 + 8);
          *(undefined8 *)ivec = *(undefined8 *)puVar5;
          *(undefined8 *)(ivec + 8) = uVar2;
          uVar9 = puVar10[1];
          *(ulong *)(ivec + 0x10) = *puVar10;
          *(ulong *)(ivec + 0x18) = uVar9;
        }
      }
      else if (in == out) {
        uVar16 = *(ulong *)ivec;
        uVar17 = *(ulong *)(ivec + 8);
        uVar18 = *(ulong *)(ivec + 0x10);
        uVar19 = *(ulong *)(ivec + 0x18);
        if (uVar9 != 0) {
          puVar10 = (ulong *)out;
          uVar20 = uVar16;
          uVar21 = uVar17;
          do {
            puVar8 = puVar10 + 2;
            uVar16 = *(ulong *)in;
            uVar17 = *(ulong *)((long)in + 8);
            in = (uchar *)((long)in + 0x10);
            local_58 = uVar18 ^ uVar16;
            uStack_50 = uVar19 ^ uVar17;
            AES_decrypt((uchar *)&local_58,(uchar *)&local_58,key);
            uVar18 = uVar20 ^ local_58;
            uVar19 = uVar21 ^ uStack_50;
            *puVar10 = uVar18;
            puVar10[1] = uVar19;
            puVar10 = puVar8;
            uVar20 = uVar16;
            uVar21 = uVar17;
            local_58 = uVar18;
            uStack_50 = uVar19;
          } while (puVar8 != (ulong *)(out + uVar9 * 0x10));
        }
        *(ulong *)ivec = uVar16;
        *(ulong *)(ivec + 8) = uVar17;
        *(ulong *)(ivec + 0x10) = uVar18;
        *(ulong *)(ivec + 0x18) = uVar19;
      }
      else {
        if (uVar9 == 0) {
          puVar5 = ivec + 0x10;
          puVar11 = ivec;
        }
        else {
          uVar16 = *(ulong *)(ivec + 0x10);
          uVar17 = *(ulong *)(ivec + 0x18);
          puVar10 = (ulong *)out;
          puVar8 = (ulong *)ivec;
          puVar13 = (ulong *)in;
          do {
            puVar15 = puVar10 + 2;
            local_58 = uVar16 ^ *puVar13;
            uStack_50 = uVar17 ^ puVar13[1];
            AES_decrypt((uchar *)&local_58,(uchar *)puVar10,key);
            uVar16 = *puVar8 ^ *puVar10;
            uVar17 = puVar8[1] ^ puVar10[1];
            *puVar10 = uVar16;
            puVar10[1] = uVar17;
            puVar10 = puVar15;
            puVar8 = puVar13;
            puVar13 = puVar13 + 2;
          } while (puVar15 != (ulong *)(out + uVar9 * 0x10));
          lVar4 = (uVar9 - 1) * 0x10;
          puVar5 = out + lVar4;
          puVar11 = in + lVar4;
        }
        uVar2 = *(undefined8 *)(puVar11 + 8);
        *(undefined8 *)ivec = *(undefined8 *)puVar11;
        *(undefined8 *)(ivec + 8) = uVar2;
        uVar2 = *(undefined8 *)(puVar5 + 8);
        *(undefined8 *)(ivec + 0x10) = *(undefined8 *)puVar5;
        *(undefined8 *)(ivec + 0x18) = uVar2;
      }
      goto LAB_00100145;
    }
    goto LAB_0010039d;
  }
  pcVar12 = "crypto/aes/aes_ige.c";
  pcVar14 = "assertion failed: (AES_ENCRYPT == enc) || (AES_DECRYPT == enc)";
  OPENSSL_die("assertion failed: (AES_ENCRYPT == enc) || (AES_DECRYPT == enc)",
              "crypto/aes/aes_ige.c",0x3b);
  lStack_d8 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_c8 = out;
  puStack_c0 = in;
  pAStack_b8 = unaff_R12;
  if ((((ulong *)pcVar14 != (ulong *)0x0) && ((ulong *)pcVar12 != (ulong *)0x0)) &&
     ((key != (AES_KEY *)0x0 && (puVar10 != (ulong *)0x0)))) {
    if (uStack_90 < 2) {
      if ((extraout_RDX & 0xf) == 0) {
        if (uStack_90 == 1) {
          if (0xf < extraout_RDX) {
            lVar4 = (extraout_RDX - 0x10 & 0xfffffffffffffff0) + 0x10;
            puVar7 = (ulong *)(lVar4 + (long)pcVar14);
            puVar8 = puVar10;
            puVar13 = puVar10 + 2;
            puVar15 = (ulong *)pcVar12;
            do {
              lVar6 = 0;
              do {
                *(byte *)((long)puVar15 + lVar6) =
                     *(byte *)((long)pcVar14 + lVar6) ^ *(byte *)((long)puVar8 + lVar6);
                lVar6 = lVar6 + 1;
              } while (lVar6 != 0x10);
              AES_encrypt((uchar *)puVar15,(uchar *)puVar15,key);
              lVar6 = 0;
              do {
                *(byte *)((long)puVar15 + lVar6) =
                     *(byte *)((long)puVar15 + lVar6) ^ *(byte *)((long)puVar13 + lVar6);
                lVar6 = lVar6 + 1;
              } while (lVar6 != 0x10);
              uStack_f0 = *(ulong *)pcVar14;
              uStack_e8 = *(ulong *)((long)pcVar14 + 8);
              pcVar14 = (char *)((long)pcVar14 + 0x10);
              puVar8 = puVar15;
              puVar13 = &uStack_f0;
              puVar15 = puVar15 + 2;
            } while (puVar7 != (ulong *)pcVar14);
            puVar8 = puVar10 + 4;
            puVar13 = (ulong *)((long)pcVar12 + lVar4);
            puVar10 = puVar10 + 6;
            do {
              uStack_100 = puVar13[-2];
              uStack_f8 = puVar13[-1];
              puVar15 = puVar13 + -2;
              lVar4 = 0;
              do {
                pbVar1 = (byte *)((long)puVar13 + lVar4 + -0x10);
                *pbVar1 = *pbVar1 ^ *(byte *)((long)puVar8 + lVar4);
                lVar4 = lVar4 + 1;
              } while (lVar4 != 0x10);
              AES_encrypt((uchar *)puVar15,(uchar *)puVar15,key);
              lVar4 = 0;
              do {
                pbVar1 = (byte *)((long)puVar13 + lVar4 + -0x10);
                *pbVar1 = *pbVar1 ^ *(byte *)((long)puVar10 + lVar4);
                lVar4 = lVar4 + 1;
              } while (lVar4 != 0x10);
              uStack_f0 = uStack_100;
              uStack_e8 = uStack_f8;
              puVar8 = puVar15;
              puVar13 = puVar15;
              puVar10 = &uStack_f0;
            } while ((ulong *)pcVar12 != puVar15);
          }
        }
        else {
          puVar8 = puVar10 + 6;
          lVar4 = (long)pcVar14 + extraout_RDX;
          puVar13 = (ulong *)((long)pcVar12 + extraout_RDX);
          if (0xf < extraout_RDX) {
            out_00 = (ulong *)((~(extraout_RDX - 0x10) & 0xfffffffffffffff0) + (long)puVar13);
            puVar15 = puVar10 + 4;
            puVar7 = puVar13;
            do {
              uStack_100 = *puVar8;
              puVar3 = puVar8 + 1;
              uVar9 = *(ulong *)(lVar4 + -0x10);
              uVar16 = *(ulong *)(lVar4 + -8);
              puVar8 = puVar7 + -2;
              lVar4 = lVar4 + -0x10;
              uStack_100 = uStack_100 ^ uVar9;
              uStack_f8 = *puVar3 ^ uVar16;
              AES_decrypt((uchar *)&uStack_100,(uchar *)puVar8,key);
              lVar6 = 0;
              do {
                pbVar1 = (byte *)((long)puVar7 + lVar6 + -0x10);
                *pbVar1 = *pbVar1 ^ *(byte *)((long)puVar15 + lVar6);
                lVar6 = lVar6 + 1;
              } while (lVar6 != 0x10);
              puVar15 = &uStack_f0;
              puVar7 = puVar8;
              uStack_f0 = uVar9;
              uStack_e8 = uVar16;
            } while (out_00 != puVar8);
            puVar8 = puVar10 + 2;
            do {
              uVar9 = *out_00;
              uVar16 = out_00[1];
              uStack_100 = *puVar8 ^ uVar9;
              uStack_f8 = puVar8[1] ^ uVar16;
              AES_decrypt((uchar *)&uStack_100,(uchar *)out_00,key);
              lVar4 = 0;
              do {
                *(byte *)((long)out_00 + lVar4) =
                     *(byte *)((long)out_00 + lVar4) ^ *(byte *)((long)puVar10 + lVar4);
                lVar4 = lVar4 + 1;
              } while (lVar4 != 0x10);
              puVar15 = out_00 + 2;
              puVar8 = out_00;
              out_00 = puVar15;
              puVar10 = &uStack_f0;
              uStack_f0 = uVar9;
              uStack_e8 = uVar16;
            } while (puVar13 != puVar15);
          }
        }
        if (lStack_d8 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_0010070a;
      }
      OPENSSL_die("assertion failed: (length % AES_BLOCK_SIZE) == 0","crypto/aes/aes_ige.c",0xca,0);
    }
    OPENSSL_die("assertion failed: (AES_ENCRYPT == enc) || (AES_DECRYPT == enc)",
                "crypto/aes/aes_ige.c",0xc9);
  }
  OPENSSL_die("assertion failed: in && out && key && ivec","crypto/aes/aes_ige.c",200);
LAB_0010070a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void AES_bi_ige_encrypt(uchar *in,uchar *out,size_t length,AES_KEY *key,AES_KEY *key2,uchar *ivec,
                       int enc)

{
  byte *pbVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  uchar *puVar11;
  uchar *puVar12;
  uchar *in_00;
  ulong *out_00;
  long in_FS_OFFSET;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  ulong uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((in != (uchar *)0x0) && (out != (uchar *)0x0)) && (key != (AES_KEY *)0x0)) &&
     (ivec != (uchar *)0x0)) {
    if ((uint)enc < 2) {
      if ((length & 0xf) == 0) {
        if (enc == 1) {
          if (0xf < length) {
            lVar5 = (length - 0x10 & 0xfffffffffffffff0) + 0x10;
            puVar8 = (ulong *)(in + lVar5);
            puVar11 = ivec;
            puVar7 = (ulong *)(ivec + 0x10);
            puVar12 = out;
            do {
              lVar6 = 0;
              do {
                puVar12[lVar6] = *(byte *)((long)in + lVar6) ^ puVar11[lVar6];
                lVar6 = lVar6 + 1;
              } while (lVar6 != 0x10);
              AES_encrypt(puVar12,puVar12,key);
              lVar6 = 0;
              do {
                puVar12[lVar6] = puVar12[lVar6] ^ *(byte *)((long)puVar7 + lVar6);
                lVar6 = lVar6 + 1;
              } while (lVar6 != 0x10);
              local_58 = *(ulong *)in;
              uStack_50 = *(ulong *)((long)in + 8);
              in = (uchar *)((long)in + 0x10);
              puVar11 = puVar12;
              puVar7 = &local_58;
              puVar12 = puVar12 + 0x10;
            } while (puVar8 != (ulong *)in);
            puVar11 = ivec + 0x20;
            puVar12 = out + lVar5;
            puVar7 = (ulong *)(ivec + 0x30);
            do {
              local_68 = *(ulong *)(puVar12 + -0x10);
              uStack_60 = *(ulong *)(puVar12 + -8);
              in_00 = puVar12 + -0x10;
              lVar5 = 0;
              do {
                puVar12[lVar5 + -0x10] = puVar12[lVar5 + -0x10] ^ puVar11[lVar5];
                lVar5 = lVar5 + 1;
              } while (lVar5 != 0x10);
              AES_encrypt(in_00,in_00,key);
              lVar5 = 0;
              do {
                puVar12[lVar5 + -0x10] = puVar12[lVar5 + -0x10] ^ *(byte *)((long)puVar7 + lVar5);
                lVar5 = lVar5 + 1;
              } while (lVar5 != 0x10);
              local_58 = local_68;
              uStack_50 = uStack_60;
              puVar11 = in_00;
              puVar12 = in_00;
              puVar7 = &local_58;
            } while (out != in_00);
          }
        }
        else {
          puVar7 = (ulong *)(ivec + 0x30);
          puVar11 = in + length;
          puVar8 = (ulong *)(out + length);
          if (0xf < length) {
            out_00 = (ulong *)((~(length - 0x10) & 0xfffffffffffffff0) + (long)puVar8);
            puVar9 = (ulong *)(ivec + 0x20);
            puVar10 = puVar8;
            do {
              local_68 = *puVar7;
              puVar2 = puVar7 + 1;
              uVar3 = *(ulong *)(puVar11 + -0x10);
              uVar4 = *(ulong *)(puVar11 + -8);
              puVar7 = puVar10 + -2;
              puVar11 = puVar11 + -0x10;
              local_68 = local_68 ^ uVar3;
              uStack_60 = *puVar2 ^ uVar4;
              AES_decrypt((uchar *)&local_68,(uchar *)puVar7,key);
              lVar5 = 0;
              do {
                pbVar1 = (byte *)((long)puVar10 + lVar5 + -0x10);
                *pbVar1 = *pbVar1 ^ *(byte *)((long)puVar9 + lVar5);
                lVar5 = lVar5 + 1;
              } while (lVar5 != 0x10);
              puVar9 = &local_58;
              puVar10 = puVar7;
              local_58 = uVar3;
              uStack_50 = uVar4;
            } while (out_00 != puVar7);
            puVar7 = (ulong *)(ivec + 0x10);
            do {
              uVar3 = *out_00;
              uVar4 = out_00[1];
              local_68 = *puVar7 ^ uVar3;
              uStack_60 = puVar7[1] ^ uVar4;
              AES_decrypt((uchar *)&local_68,(uchar *)out_00,key);
              lVar5 = 0;
              do {
                *(byte *)((long)out_00 + lVar5) =
                     *(byte *)((long)out_00 + lVar5) ^ *(byte *)((long)ivec + lVar5);
                lVar5 = lVar5 + 1;
              } while (lVar5 != 0x10);
              puVar9 = out_00 + 2;
              puVar7 = out_00;
              out_00 = puVar9;
              ivec = (uchar *)&local_58;
              local_58 = uVar3;
              uStack_50 = uVar4;
            } while (puVar8 != puVar9);
          }
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_0010070a;
      }
      OPENSSL_die("assertion failed: (length % AES_BLOCK_SIZE) == 0","crypto/aes/aes_ige.c",0xca,0);
    }
    OPENSSL_die("assertion failed: (AES_ENCRYPT == enc) || (AES_DECRYPT == enc)",
                "crypto/aes/aes_ige.c",0xc9);
  }
  OPENSSL_die("assertion failed: in && out && key && ivec","crypto/aes/aes_ige.c",200);
LAB_0010070a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


