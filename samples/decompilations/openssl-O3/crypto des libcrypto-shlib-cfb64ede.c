
void DES_ede3_cfb64_encrypt
               (uchar *in,uchar *out,long length,DES_key_schedule *ks1,DES_key_schedule *ks2,
               DES_key_schedule *ks3,DES_cblock *ivec,int *num,int enc)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  DES_cblock local_48;
  long local_40;
  
  uVar4 = *num;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (enc == 0) {
    pbVar5 = in;
    if (length != 0) {
      do {
        if (uVar4 == 0) {
          local_48 = *ivec;
          DES_encrypt3((uint *)local_48,ks1,ks2,ks3);
          *ivec = local_48;
        }
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        bVar1 = (*ivec)[(int)uVar4];
        (*ivec)[(int)uVar4] = bVar2;
        uVar4 = uVar4 + 1 & 7;
        *out = bVar2 ^ bVar1;
        out = out + 1;
      } while (in + (length - (long)pbVar5) != (uchar *)0x0);
    }
  }
  else if (length != 0) {
    pbVar5 = in;
    do {
      if (uVar4 == 0) {
        local_48 = *ivec;
        DES_encrypt3((uint *)local_48,ks1,ks2,ks3);
        *ivec = local_48;
      }
      lVar3 = (long)(int)uVar4;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      bVar2 = bVar2 ^ (*ivec)[lVar3];
      uVar4 = uVar4 + 1 & 7;
      *out = bVar2;
      (*ivec)[lVar3] = bVar2;
      out = out + 1;
    } while (in + (length - (long)pbVar5) != (uchar *)0x0);
  }
  *num = uVar4;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void DES_ede3_cfb_encrypt
               (uchar *in,uchar *out,int numbits,long length,DES_key_schedule *ks1,
               DES_key_schedule *ks2,DES_key_schedule *ks3,DES_cblock *ivec,int enc)

{
  byte *pbVar1;
  uchar uVar3;
  ulong uVar2;
  byte bVar4;
  sbyte sVar5;
  byte bVar6;
  ulong uVar7;
  byte bVar12;
  uint uVar8;
  uint uVar9;
  ulong *puVar10;
  ulong uVar11;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uchar *puVar21;
  ulong uVar22;
  byte *pbVar23;
  uchar *puVar24;
  uchar *puVar25;
  long in_FS_OFFSET;
  ulong local_c8;
  ulong local_b8;
  ulong local_a8;
  uint local_94;
  ulong local_88;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  ulong uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x40 < numbits) goto LAB_00100461;
  uVar9 = numbits + 7;
  uVar16 = *(uint *)*ivec;
  uVar13 = *(uint *)(*ivec + 4);
  uVar11 = (ulong)uVar13;
  uVar22 = (ulong)(uVar9 >> 3);
  bVar4 = (byte)(numbits >> 0x1f);
  uVar14 = uVar11;
  if (enc == 0) {
    if (uVar22 <= (ulong)length) {
      bVar4 = ((bVar4 >> 5) - ((char)numbits + (bVar4 >> 5) & 7)) + 8;
      if (numbits != 0x20) {
        if (-1 < numbits) {
          uVar9 = numbits;
        }
        local_c8 = length - uVar22;
        uVar8 = numbits & 7;
        puVar21 = in + uVar22;
        puVar10 = (ulong *)((long)&local_58 + (long)((int)uVar9 >> 3));
        local_60 = uVar16;
        local_5c = uVar13;
        DES_encrypt3(&local_60,ks1,ks2,ks3);
        switch(uVar22) {
        default:
          local_b8 = 0;
          puVar21 = puVar21 + uVar22;
          uVar14 = (ulong)uVar16;
          local_94 = 0;
          uVar2 = 0;
          uVar15 = 0;
          uVar19 = 0;
          local_88 = 0;
          uVar18 = 0;
          uVar7 = 0;
          uVar20 = 0;
          uVar9 = 0;
          break;
        case 1:
          uVar9 = (uint)puVar21[-1];
          local_b8 = 0;
          uVar14 = (ulong)uVar16;
          local_94 = 0;
          uVar2 = 0;
          uVar15 = 0;
          uVar19 = 0;
          local_88 = (ulong)puVar21[-1];
          uVar18 = 0;
          uVar7 = 0;
          uVar20 = 0;
          break;
        case 2:
          uVar20 = 0;
          uVar9 = 0;
          goto LAB_001008de;
        case 3:
          uVar20 = 0;
          uVar9 = 0;
          goto LAB_001008d1;
        case 4:
          uVar20 = 0;
          goto LAB_001008c3;
        case 5:
          uVar9 = 0;
          goto LAB_001008b9;
        case 6:
          uVar9 = 0;
          goto LAB_001008a9;
        case 7:
          uVar9 = 0;
          goto LAB_00100895;
        case 8:
          goto switchD_0010087d_caseD_8;
        }
LAB_00100681:
        uVar16 = (uint)uVar20;
        uStack_50 = ((((((uVar2 << 8 | uVar15 & 0xff) << 8 | local_b8) << 8 | uVar19) << 8 | uVar18)
                      << 8 | uVar7 & 0xff) << 8 | (ulong)(byte)local_94) << 8 | local_88;
        local_58 = (((((((uVar11 >> 0x18) << 8 | uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 8 & 0xff)
                       << 8 | uVar11 & 0xff) << 8 | uVar14 >> 0x18) << 8 | uVar14 >> 0x10 & 0xff) <<
                    8 | uVar14 >> 8 & 0xff) << 8 | uVar14 & 0xff;
        if (uVar8 != 0) goto LAB_00100bd0;
        local_58 = *puVar10;
LAB_00100789:
        uVar11 = local_58 >> 0x20;
        uVar17 = (uint)local_58;
LAB_00100797:
        uVar14 = (ulong)uVar17;
        puVar24 = out + uVar22;
        uVar9 = local_60 ^ uVar9;
        uVar16 = local_5c ^ (uint)uVar20;
        puVar25 = puVar24;
        switch(uVar22) {
        default:
          do {
            uVar13 = (uint)uVar11;
            uVar16 = (uint)uVar14;
            out = puVar24 + uVar22;
            uVar20 = local_58;
            uVar15 = uStack_50;
            if (local_c8 < uVar22) goto LAB_001003f8;
            puVar21 = puVar21 + uVar22;
            local_c8 = local_c8 - uVar22;
            local_60 = uVar16;
            local_5c = uVar13;
            DES_encrypt3(&local_60,ks1,ks2,ks3);
            bVar12 = (byte)(uVar11 >> 8);
            bVar6 = (byte)(uVar11 >> 0x18);
            switch(uVar22) {
            default:
              goto switchD_0010087d_caseD_0;
            case 1:
              uVar9 = (uint)puVar21[-1];
              uVar16 = 0;
              local_58 = (((((((ulong)bVar6 << 8 | uVar11 >> 0x10 & 0xff) << 8 | (ulong)bVar12) << 8
                            | uVar11 & 0xff) << 8 | uVar14 >> 0x18) << 8 | uVar14 >> 0x10 & 0xff) <<
                          8 | uVar14 >> 8 & 0xff) << 8 | uVar14 & 0xff;
              uStack_50 = (ulong)uVar9;
              if (uVar8 != 0) goto LAB_00100bd0;
              puVar24 = out + 1;
              local_58 = *puVar10;
              uVar9 = local_60 ^ uVar9;
              uVar14 = local_58 & 0xffffffff;
              uVar11 = local_58 >> 0x20;
              break;
            case 2:
              uVar16 = 0;
              uVar9 = (uint)*(ushort *)(puVar21 + -2);
              uStack_50 = (ulong)*(ushort *)(puVar21 + -2);
              local_58 = (((((((ulong)bVar6 << 8 | uVar11 >> 0x10 & 0xff) << 8 | (ulong)bVar12) << 8
                            | uVar11 & 0xff) << 8 | uVar14 >> 0x18) << 8 | uVar14 >> 0x10 & 0xff) <<
                          8 | uVar14 >> 8 & 0xff) << 8 | uVar14 & 0xff;
              if (uVar8 != 0) goto LAB_00100bd0;
              puVar24 = out + 2;
              local_58 = *puVar10;
              uVar9 = local_60 ^ uVar9;
              uVar14 = local_58 & 0xffffffff;
              uVar11 = local_58 >> 0x20;
LAB_00100817:
              puVar24[-1] = (uchar)(uVar9 >> 8);
              puVar24 = puVar24 + -1;
              break;
            case 3:
              uVar20 = 0;
              uVar9 = (uint)puVar21[-1] << 0x10 | (uint)puVar21[-3] | (uint)puVar21[-2] << 8;
              goto LAB_0010090c;
            case 4:
              uVar20 = 0;
              uVar9 = (uint)puVar21[-3] << 8 |
                      (uint)puVar21[-2] << 0x10 | (uint)puVar21[-1] << 0x18 | (uint)puVar21[-4];
              goto LAB_0010090c;
            case 5:
              uVar20 = (ulong)puVar21[-1];
              uVar9 = (uint)puVar21[-4] << 8 |
                      (uint)puVar21[-3] << 0x10 | (uint)puVar21[-2] << 0x18 | (uint)puVar21[-5];
              goto LAB_0010090c;
            case 6:
              goto switchD_0010087d_caseD_6;
            case 7:
              uVar9 = 0;
              goto LAB_00100895;
            case 8:
              goto switchD_0010087d_caseD_8;
            }
switchD_001007c8_caseD_1:
            puVar24[-1] = (uchar)uVar9;
            puVar24 = puVar24 + -1;
          } while( true );
        case 1:
          goto switchD_001007c8_caseD_1;
        case 2:
          goto LAB_00100817;
        case 3:
          goto switchD_001007c8_caseD_3;
        case 4:
          goto LAB_001007fd;
        case 5:
          break;
        case 8:
          puVar24 = puVar24 + -1;
          *puVar24 = (uchar)(uVar16 >> 0x18);
        case 7:
          puVar25 = puVar24 + -1;
          *puVar25 = (uchar)(uVar16 >> 0x10);
        case 6:
          puVar24 = puVar25 + -1;
          puVar25[-1] = (uchar)(uVar16 >> 8);
        }
        puVar24[-1] = (uchar)uVar16;
        puVar24 = puVar24 + -1;
LAB_001007fd:
        puVar25 = puVar24 + -1;
        puVar24[-1] = (uchar)(uVar9 >> 0x18);
switchD_001007c8_caseD_3:
        puVar24 = puVar25 + -1;
        puVar25[-1] = (uchar)(uVar9 >> 0x10);
        goto LAB_00100817;
      }
      uVar22 = length - 4;
      local_60 = uVar16;
      local_5c = uVar13;
      DES_encrypt3(&local_60,ks1,ks2,ks3);
      puVar21 = out + 4;
      uVar9 = (uint)in[1] << 8 | (uint)in[2] << 0x10 | (uint)in[3] << 0x18 | (uint)*in;
      uVar16 = local_60 ^ uVar9;
      pbVar23 = in + 4;
      while( true ) {
        uVar11 = (ulong)uVar9;
        puVar21[-4] = (uchar)uVar16;
        puVar21[-1] = (uchar)(uVar16 >> 0x18);
        puVar21[-2] = (uchar)(uVar16 >> 0x10);
        puVar21[-3] = (uchar)(uVar16 >> 8);
        uVar20 = local_58;
        uVar15 = uStack_50;
        if (uVar22 < 4) break;
        uVar22 = uVar22 - 4;
        puVar21 = puVar21 + 4;
        local_60 = (uint)uVar14;
        local_5c = uVar9;
        DES_encrypt3(&local_60,ks1,ks2,ks3);
        uVar9 = (uint)pbVar23[2] << 0x10 | (uint)pbVar23[3] << 0x18 | (uint)*pbVar23 |
                (uint)pbVar23[1] << 8;
        uVar16 = local_60 ^ uVar9;
        uVar14 = uVar11;
        pbVar23 = pbVar23 + 4;
      }
      goto LAB_001003f8;
    }
LAB_00100cf0:
    uVar14 = (ulong)uVar16;
    uVar20 = local_58;
    uVar15 = uStack_50;
  }
  else {
    if ((ulong)length < uVar22) goto LAB_00100cf0;
    uVar8 = numbits & 7;
    if (-1 < numbits) {
      uVar9 = numbits;
    }
    puVar10 = (ulong *)((long)&local_58 + (long)((int)uVar9 >> 3));
    bVar4 = ((bVar4 >> 5) - ((char)numbits + (bVar4 >> 5) & 7)) + 8;
    if (numbits != 0x20) {
      local_a8 = length - uVar22;
      puVar21 = in + uVar22;
      local_60 = uVar16;
      local_5c = uVar13;
      DES_encrypt3(&local_60,ks1,ks2,ks3);
      switch(uVar22) {
      default:
        local_b8 = (ulong)uVar13;
        uVar9 = 0;
        uVar13 = 0;
        break;
      case 1:
        local_b8 = (ulong)uVar13;
        uVar9 = 0;
        uVar13 = 0;
        goto LAB_00100de5;
      case 2:
        local_b8 = (ulong)uVar13;
        uVar9 = 0;
        uVar13 = 0;
        goto LAB_00100dd8;
      case 3:
        local_b8 = (ulong)uVar13;
        uVar9 = 0;
        uVar13 = 0;
        puVar24 = out;
        goto LAB_00100dca;
      case 4:
        local_b8 = (ulong)uVar13;
        uVar9 = 0;
        goto LAB_00100dbc;
      case 5:
        local_b8 = (ulong)uVar13;
        uVar9 = 0;
        goto LAB_00100db1;
      case 6:
        local_b8 = (ulong)uVar13;
        uVar9 = 0;
        goto LAB_00100da1;
      case 7:
        local_b8 = (ulong)uVar13;
        uVar9 = 0;
        goto LAB_00100d93;
      case 8:
        goto switchD_00100ee1_caseD_8;
      }
LAB_00100df2:
      uVar13 = uVar13 ^ local_60;
      uVar14 = (ulong)uVar13;
      puVar21 = puVar21 + uVar22;
      uVar9 = uVar9 ^ local_5c;
      uVar11 = (ulong)uVar9;
      puVar24 = out + uVar22;
      uVar20 = (ulong)(byte)uVar13;
      bVar6 = (byte)(uVar13 >> 0x10);
      uVar17 = uVar13 >> 8 & 0xff;
      sVar5 = (sbyte)uVar8;
      puVar25 = puVar24;
      switch(uVar22) {
      default:
switchD_00100e31_caseD_0:
        puVar24 = puVar24 + uVar22;
LAB_00100f2b:
        do {
          local_58 = (((((((ulong)((uint)local_b8 >> 0x18) << 8 |
                          (ulong)((uint)local_b8 >> 0x10 & 0xff)) << 8 |
                         (ulong)((uint)local_b8 >> 8 & 0xff)) << 8 | local_b8 & 0xff) << 8 |
                       (ulong)(uVar16 >> 0x18)) << 8 | (ulong)(uVar16 >> 0x10 & 0xff)) << 8 |
                     (ulong)(byte)(uVar16 >> 8)) << 8 | (ulong)(uVar16 & 0xff);
          uStack_50 = (((((((uVar11 >> 0x18) << 8 | uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 8 & 0xff
                          ) << 8 | uVar11 & 0xff) << 8 | uVar14 >> 0x18) << 8 | (ulong)bVar6) << 8 |
                      (ulong)uVar17) << 8 | uVar20;
          if (uVar8 == 0) goto LAB_00101540;
          memmove(&local_58,puVar10,9);
          uVar14 = local_58;
          local_58._0_2_ =
               CONCAT11((byte)((int)(uint)local_58._2_1_ >> (bVar4 & 0x1f)) |
                        local_58._1_1_ << sVar5,
                        (char)local_58 << sVar5 |
                        (byte)((int)(uint)local_58._1_1_ >> (bVar4 & 0x1f)));
          local_58._4_1_ = SUB81(uVar14,4);
          local_58._0_3_ =
               CONCAT12((byte)((int)(uint)local_58._3_1_ >> (bVar4 & 0x1f)) |
                        local_58._2_1_ << sVar5,(undefined2)local_58);
          local_58._5_1_ = SUB81(uVar14,5);
          local_58._0_4_ =
               CONCAT13((byte)((int)(uint)local_58._4_1_ >> (bVar4 & 0x1f)) |
                        local_58._3_1_ << sVar5,(undefined3)local_58);
          local_58._6_1_ = SUB81(uVar14,6);
          local_58._0_5_ =
               CONCAT14((byte)((int)(uint)local_58._5_1_ >> (bVar4 & 0x1f)) |
                        local_58._4_1_ << sVar5,(uint)local_58);
          local_58._7_1_ = SUB81(uVar14,7);
          local_58._0_6_ =
               CONCAT15((byte)((int)(uint)local_58._6_1_ >> (bVar4 & 0x1f)) |
                        local_58._5_1_ << sVar5,(undefined5)local_58);
          local_58._0_7_ =
               CONCAT16((byte)((int)(uint)local_58._7_1_ >> (bVar4 & 0x1f)) |
                        local_58._6_1_ << sVar5,(undefined6)local_58);
          local_58 = CONCAT17((byte)((int)(uint)(byte)uStack_50 >> (bVar4 & 0x1f)) |
                              local_58._7_1_ << sVar5,(undefined7)local_58);
LAB_00101118:
          uVar14 = local_58 & 0xffffffff;
          uVar11 = local_58 >> 0x20;
          out = puVar24;
LAB_00100e88:
          uVar16 = (uint)uVar14;
          uVar13 = (uint)uVar11;
          uVar20 = local_58;
          uVar15 = uStack_50;
          if (local_a8 < uVar22) goto LAB_001003f8;
          local_a8 = local_a8 - uVar22;
          puVar21 = puVar21 + uVar22;
          local_60 = uVar16;
          local_5c = uVar13;
          DES_encrypt3(&local_60,ks1,ks2,ks3);
          bVar6 = (byte)(local_60 >> 0x10);
          uVar9 = local_5c;
          local_b8 = uVar11;
          switch(uVar22) {
          default:
            puVar21 = puVar21 + uVar22;
            puVar24 = out + uVar22;
            uVar11 = (ulong)local_5c;
            uVar17 = local_60 >> 8 & 0xff;
            uVar20 = (ulong)(local_60 & 0xff);
            uVar14 = (ulong)local_60;
            goto switchD_00100e31_caseD_0;
          case 1:
            puVar24 = out + 1;
            uVar13 = puVar21[-1] ^ local_60;
            uVar17 = local_60 >> 8 & 0xff;
            uVar20 = (ulong)(uVar13 & 0xff);
LAB_00101205:
            puVar24[-1] = (uchar)uVar20;
            break;
          case 2:
            puVar24 = out + 2;
            uVar13 = *(ushort *)(puVar21 + -2) ^ local_60;
            uVar17 = uVar13 >> 8 & 0xff;
            uVar20 = (ulong)(uVar13 & 0xff);
LAB_00100f1f:
            puVar24[-1] = (uchar)uVar17;
            puVar24[-2] = (uchar)uVar20;
            break;
          case 3:
            goto switchD_00100ee1_caseD_3;
          case 4:
            goto switchD_00100ee1_caseD_4;
          case 5:
            uVar9 = 0;
            goto LAB_00100db1;
          case 6:
            uVar9 = 0;
            goto LAB_00100da1;
          case 7:
            uVar9 = 0;
            goto LAB_00100d93;
          case 8:
            goto switchD_00100ee1_caseD_8;
          }
          uVar14 = (ulong)uVar13;
          uVar11 = (ulong)uVar9;
        } while( true );
      case 1:
        goto LAB_00101205;
      case 2:
        goto LAB_00100f1f;
      case 3:
        uVar11 = local_b8;
        goto LAB_0010124b;
      case 4:
        goto LAB_00100e60;
      case 5:
        goto switchD_00100e31_caseD_5;
      case 6:
        break;
      case 8:
        puVar25 = puVar24 + -1;
        *puVar25 = (uchar)(uVar9 >> 0x18);
      case 7:
        puVar24 = puVar25 + -1;
        puVar25[-1] = (uchar)(uVar9 >> 0x10);
      }
      puVar24[-1] = (uchar)(uVar9 >> 8);
      puVar24 = puVar24 + -1;
switchD_00100e31_caseD_5:
      puVar24[-1] = (uchar)uVar9;
      puVar24 = puVar24 + -1;
      goto LAB_00100e60;
    }
    uVar22 = length - 4;
    puVar21 = out + 4;
    local_60 = uVar16;
    local_5c = uVar13;
    DES_encrypt3(&local_60,ks1,ks2,ks3);
    uVar9 = ((uint)*in | (uint)in[1] << 8 | (uint)in[2] << 0x10 | (uint)in[3] << 0x18) ^ local_60;
    uVar3 = (uchar)(uVar9 >> 8);
    pbVar23 = in + 4;
    while( true ) {
      uVar11 = (ulong)uVar9;
      puVar21[-2] = (uchar)(uVar9 >> 0x10);
      puVar21[-3] = uVar3;
      puVar21[-1] = (uchar)(uVar9 >> 0x18);
      puVar21[-4] = (uchar)uVar9;
      uVar20 = local_58;
      uVar15 = uStack_50;
      if (uVar22 < 4) break;
      uVar22 = uVar22 - 4;
      puVar21 = puVar21 + 4;
      local_60 = (uint)uVar14;
      local_5c = uVar9;
      DES_encrypt3(&local_60,ks1,ks2,ks3);
      uVar9 = ((uint)*pbVar23 |
              (uint)pbVar23[1] << 8 | (uint)pbVar23[2] << 0x10 | (uint)pbVar23[3] << 0x18) ^
              local_60;
      uVar3 = (uchar)(uVar9 >> 8);
      uVar14 = uVar11;
      pbVar23 = pbVar23 + 4;
    }
  }
LAB_001003f8:
  uStack_50 = uVar15;
  local_58 = uVar20;
  *ivec = (DES_cblock)
          ((((((((uVar11 >> 0x18) << 8 | uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 8 & 0xff) << 8 |
              uVar11 & 0xff) << 8 | uVar14 >> 0x18 & 0xff) << 8 | uVar14 >> 0x10 & 0xff) << 8 |
           (uVar14 & 0xffffffff) >> 8 & 0xff) << 8 | uVar14 & 0xff);
LAB_00100461:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_0010087d_caseD_8:
  pbVar23 = puVar21 + -1;
  puVar21 = puVar21 + -1;
  uVar9 = (uint)*pbVar23 << 0x18;
LAB_00100895:
  pbVar23 = puVar21 + -1;
  puVar21 = puVar21 + -1;
  uVar9 = uVar9 | (uint)*pbVar23 << 0x10;
LAB_001008a9:
  pbVar23 = puVar21 + -1;
  puVar21 = puVar21 + -1;
  uVar9 = (uint)*pbVar23 << 8 | uVar9;
LAB_001008b9:
  pbVar23 = puVar21 + -1;
  puVar21 = puVar21 + -1;
  uVar20 = (ulong)(*pbVar23 | uVar9);
LAB_001008c3:
  pbVar23 = puVar21 + -1;
  puVar21 = puVar21 + -1;
  uVar9 = (uint)*pbVar23 << 0x18;
LAB_001008d1:
  uVar9 = (uint)puVar21[-1] << 0x10 | uVar9;
  puVar21 = puVar21 + -1;
LAB_001008de:
  pbVar23 = puVar21 + -2;
  pbVar1 = puVar21 + -1;
  puVar21 = puVar21 + (uVar22 - 2);
  uVar9 = (uint)*pbVar1 << 8 | uVar9 | *pbVar23;
  uVar11 = uVar20;
  uVar17 = uVar9;
  if (numbits != 0x40) {
    uVar11 = (ulong)uVar13;
    uVar14 = (ulong)uVar16;
LAB_0010090c:
    local_88 = (ulong)(byte)uVar9;
    uVar7 = (ulong)(uVar9 >> 0x10);
    uVar19 = uVar20 & 0xff;
    uVar15 = uVar20 >> 0x10;
    local_94 = uVar9 >> 8 & 0xff;
    uVar18 = (ulong)(uVar9 >> 0x18);
    local_b8 = uVar20 >> 8 & 0xff;
    uVar2 = uVar20 >> 0x18;
    goto LAB_00100681;
  }
  goto LAB_00100797;
switchD_0010087d_caseD_6:
  uVar9 = 0;
  goto LAB_001008a9;
switchD_0010087d_caseD_0:
  puVar21 = puVar21 + uVar22;
  uVar16 = 0;
  uVar9 = 0;
  local_58 = (((((((uVar11 >> 0x18) << 8 | uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 8 & 0xff) << 8 |
                uVar11 & 0xff) << 8 | uVar14 >> 0x18 & 0xff) << 8 | uVar14 >> 0x10 & 0xff) << 8 |
             (uVar14 & 0xffffffff) >> 8 & 0xff) << 8 | uVar14 & 0xff;
  uStack_50 = 0;
  if (uVar8 != 0) goto LAB_00100bd0;
  uVar14 = *puVar10;
  out = out + uVar22 * 2;
  local_58._4_4_ = (uint)(uVar14 >> 0x20);
  uVar11 = (ulong)local_58._4_4_;
  uVar20 = uVar14;
  uVar15 = 0;
  if (local_c8 < uVar22) goto LAB_001003f8;
  puVar21 = puVar21 + uVar22;
  local_60 = (uint)uVar14;
  local_5c = local_58._4_4_;
  local_c8 = local_c8 - uVar22;
  local_58 = uVar14;
  DES_encrypt3(&local_60,ks1,ks2,ks3);
  goto switchD_0010087d_caseD_0;
LAB_00100bd0:
  memmove(&local_58,puVar10,9);
  uVar14 = local_58;
  uVar20 = (ulong)uVar16;
  sVar5 = (sbyte)uVar8;
  local_58._0_2_ =
       CONCAT11(local_58._1_1_ << sVar5 | (byte)((int)(uint)local_58._2_1_ >> (bVar4 & 0x1f)),
                (char)local_58 << sVar5 | (byte)((int)(uint)local_58._1_1_ >> (bVar4 & 0x1f)));
  local_58._3_1_ = SUB81(uVar14,3);
  local_58._0_3_ =
       CONCAT12(local_58._2_1_ << sVar5 | (byte)((int)(uint)local_58._3_1_ >> (bVar4 & 0x1f)),
                (undefined2)local_58);
  local_58._4_1_ = SUB81(uVar14,4);
  local_58._0_4_ =
       CONCAT13(local_58._3_1_ << sVar5 | (byte)((int)(uint)local_58._4_1_ >> (bVar4 & 0x1f)),
                (undefined3)local_58);
  local_58._5_1_ = SUB81(uVar14,5);
  local_58._0_5_ =
       CONCAT14(local_58._4_1_ << sVar5 | (byte)((int)(uint)local_58._5_1_ >> (bVar4 & 0x1f)),
                (uint)local_58);
  local_58._6_1_ = SUB81(uVar14,6);
  local_58._7_1_ = SUB81(uVar14,7);
  local_58._0_6_ =
       CONCAT15(local_58._5_1_ << sVar5 | (byte)((int)(uint)local_58._6_1_ >> (bVar4 & 0x1f)),
                (undefined5)local_58);
  local_58._0_7_ =
       CONCAT16((byte)((int)(uint)local_58._7_1_ >> (bVar4 & 0x1f)) | local_58._6_1_ << sVar5,
                (undefined6)local_58);
  local_58 = CONCAT17((byte)((int)(uint)(byte)uStack_50 >> (bVar4 & 0x1f)) | local_58._7_1_ << sVar5
                      ,(undefined7)local_58);
  goto LAB_00100789;
switchD_00100ee1_caseD_8:
  pbVar23 = puVar21 + -1;
  local_b8 = (ulong)uVar13;
  puVar21 = puVar21 + -1;
  uVar9 = (uint)*pbVar23 << 0x18;
LAB_00100d93:
  pbVar23 = puVar21 + -1;
  puVar21 = puVar21 + -1;
  uVar9 = (uint)*pbVar23 << 0x10 | uVar9;
LAB_00100da1:
  pbVar23 = puVar21 + -1;
  puVar21 = puVar21 + -1;
  uVar9 = (uint)*pbVar23 << 8 | uVar9;
LAB_00100db1:
  pbVar23 = puVar21 + -1;
  puVar21 = puVar21 + -1;
  uVar9 = *pbVar23 | uVar9;
LAB_00100dbc:
  pbVar23 = puVar21 + -1;
  puVar21 = puVar21 + -1;
  uVar13 = (uint)*pbVar23 << 0x18;
  puVar24 = out;
LAB_00100dca:
  pbVar23 = puVar21 + -1;
  puVar21 = puVar21 + -1;
  uVar13 = (uint)*pbVar23 << 0x10 | uVar13;
  out = puVar24;
LAB_00100dd8:
  uVar13 = (uint)puVar21[-1] << 8 | uVar13;
  puVar21 = puVar21 + -1;
LAB_00100de5:
  pbVar23 = puVar21 + -1;
  puVar21 = puVar21 + -1;
  uVar13 = *pbVar23 | uVar13;
  goto LAB_00100df2;
switchD_00100ee1_caseD_4:
  uVar11 = (ulong)local_5c;
  uVar9 = ((uint)puVar21[-4] |
          (uint)puVar21[-3] << 8 | (uint)puVar21[-2] << 0x10 | (uint)puVar21[-1] << 0x18) ^ local_60
  ;
  puVar24 = out + 4;
  uVar17 = uVar9 >> 8 & 0xff;
  uVar20 = (ulong)(uVar9 & 0xff);
  uVar14 = (ulong)uVar9;
  bVar6 = (byte)(uVar9 >> 0x10);
LAB_00100e60:
  puVar24[-3] = (uchar)uVar17;
  out = puVar24 + (uVar22 - 4);
  puVar24[-4] = (uchar)uVar20;
  puVar24[-1] = (uchar)(uVar14 >> 0x18);
  puVar24[-2] = bVar6;
  puVar24 = out;
  if (numbits != 0x40) goto LAB_00100f2b;
  goto LAB_00100e88;
switchD_00100ee1_caseD_3:
  puVar24 = out + 3;
  uVar13 = ((uint)puVar21[-3] | (uint)puVar21[-1] << 0x10 | (uint)puVar21[-2] << 8) ^ local_60;
  uVar17 = uVar13 >> 8 & 0xff;
  uVar20 = (ulong)(uVar13 & 0xff);
  bVar6 = (byte)(uVar13 >> 0x10);
LAB_0010124b:
  puVar24[-1] = bVar6;
  puVar24[-2] = (uchar)uVar17;
  puVar24[-3] = (uchar)uVar20;
  local_58 = (((((((uVar11 >> 0x18) << 8 | uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 8 & 0xff) << 8 |
                uVar11 & 0xff) << 8 | (ulong)(uVar16 >> 0x18)) << 8 | (ulong)(uVar16 >> 0x10 & 0xff)
              ) << 8 | (ulong)(byte)(uVar16 >> 8)) << 8 | (ulong)(uVar16 & 0xff);
  uStack_50 = (((((((ulong)(uVar9 >> 0x18) << 8 | (ulong)(uVar9 >> 0x10 & 0xff)) << 8 |
                  (ulong)(byte)(uVar9 >> 8)) << 8 | (ulong)(uVar9 & 0xff)) << 8 |
                (ulong)(uVar13 >> 0x18)) << 8 | (ulong)bVar6) << 8 | (ulong)uVar17) << 8 | uVar20;
  if (uVar8 != 0) {
    memmove(&local_58,puVar10,9);
    uVar14 = local_58;
    local_58._0_2_ =
         CONCAT11(local_58._1_1_ << sVar5 | (byte)((int)(uint)local_58._2_1_ >> (bVar4 & 0x1f)),
                  (char)local_58 << sVar5 | (byte)((int)(uint)local_58._1_1_ >> (bVar4 & 0x1f)));
    local_58._3_1_ = SUB81(uVar14,3);
    local_58._0_3_ =
         CONCAT12(local_58._2_1_ << sVar5 | (byte)((int)(uint)local_58._3_1_ >> (bVar4 & 0x1f)),
                  (undefined2)local_58);
    local_58._4_1_ = SUB81(uVar14,4);
    local_58._0_4_ =
         CONCAT13(local_58._3_1_ << sVar5 | (byte)((int)(uint)local_58._4_1_ >> (bVar4 & 0x1f)),
                  (undefined3)local_58);
    uVar16 = (uint)local_58;
    local_58._5_1_ = SUB81(uVar14,5);
    local_58._0_5_ =
         CONCAT14(local_58._4_1_ << sVar5 | (byte)((int)(uint)local_58._5_1_ >> (bVar4 & 0x1f)),
                  (uint)local_58);
    local_58._6_1_ = SUB81(uVar14,6);
    local_58._0_6_ =
         CONCAT15(local_58._5_1_ << sVar5 | (byte)((int)(uint)local_58._6_1_ >> (bVar4 & 0x1f)),
                  (undefined5)local_58);
    local_58._7_1_ = SUB81(uVar14,7);
    local_58._0_7_ =
         CONCAT16(local_58._6_1_ << sVar5 | (byte)((int)(uint)local_58._7_1_ >> (bVar4 & 0x1f)),
                  (undefined6)local_58);
    local_58 = CONCAT17((byte)((int)(uint)(byte)uStack_50 >> (bVar4 & 0x1f)) |
                        local_58._7_1_ << sVar5,(undefined7)local_58);
    local_b8 = (ulong)local_58._4_4_;
    if (2 < local_a8) {
      local_a8 = local_a8 - 3;
      uVar9 = 0;
      local_5c = local_58._4_4_;
      puVar21 = puVar21 + 3;
      local_60 = (uint)local_58;
      DES_encrypt3(&local_60,ks1,ks2,ks3);
      uVar13 = 0;
      goto LAB_00100dca;
    }
    uVar11 = (ulong)local_58._4_4_;
    uVar14 = (ulong)(uint)local_58;
    uVar20 = local_58;
    uVar15 = uStack_50;
    goto LAB_001003f8;
  }
LAB_00101540:
  local_58 = *puVar10;
  goto LAB_00101118;
}


