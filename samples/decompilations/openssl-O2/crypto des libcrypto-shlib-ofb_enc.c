
void DES_ofb_encrypt(uchar *in,uchar *out,int numbits,long length,DES_key_schedule *schedule,
                    DES_cblock *ivec)

{
  byte *pbVar1;
  DES_cblock auVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uchar *puVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uchar *puVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  uchar *local_90;
  uint local_78;
  uint uStack_74;
  uint local_58;
  uint local_54;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = 0;
  if (numbits < 0x41) {
    bVar4 = (byte)numbits;
    if (numbits < 0x21) {
      if (numbits == 0x20) {
        local_54 = 0;
        local_58 = 0xffffffff;
      }
      else {
        local_54 = 0;
        local_58 = (int)(1L << (bVar4 & 0x3f)) - 1;
      }
    }
    else if (numbits == 0x40) {
      local_54 = 0xffffffff;
      local_58 = 0xffffffff;
    }
    else {
      local_58 = 0xffffffff;
      local_54 = (int)(1L << (bVar4 - 0x20 & 0x3f)) - 1;
    }
    lVar13 = length + -1;
    auVar2 = *ivec;
    uVar8 = *(uint *)*ivec;
    uVar14 = *(uint *)(*ivec + 4);
    uVar11 = auVar2._0_4_;
    uVar15 = auVar2._4_4_;
    if (0 < length) {
      uVar9 = (ulong)(uint)numbits;
      iVar3 = numbits + 7;
      if (numbits + 7 < 0) {
        iVar3 = numbits + 0xe;
      }
      local_78 = uVar11 >> uVar9;
      uStack_74 = uVar15 >> uVar9;
      uVar12 = (ulong)(uint)(iVar3 >> 3);
      local_48 = auVar2;
      DES_encrypt1((uint *)&local_48,schedule,1);
      puVar10 = in + uVar12;
      uVar20 = CONCAT44((uint)local_48,uVar14);
      uVar19 = local_48._4_4_;
      uVar18 = (uint)local_48;
      local_90 = puVar10;
      uVar15 = uVar14;
      uVar11 = local_48._4_4_;
      switch(uVar12) {
      default:
        local_90 = puVar10 + uVar12;
        puVar10 = out + uVar12;
        in = (uchar *)(ulong)uVar8;
        break;
      case 1:
        uVar7 = 0;
        goto LAB_00100299;
      case 2:
        uVar7 = 0;
        goto LAB_00100287;
      case 3:
        uVar7 = 0;
        goto LAB_00100274;
      case 4:
        goto LAB_00100262;
      case 5:
        goto switchD_0010013c_caseD_5;
      case 6:
        goto switchD_0010013c_caseD_6;
      case 7:
        goto switchD_0010013c_caseD_7;
      case 8:
        goto switchD_0010013c_caseD_8;
      }
LAB_00100675:
      out = puVar10 + uVar12;
      uVar8 = uVar15;
      uVar14 = uVar18;
      uVar7 = uVar15;
      uVar17 = uVar18;
      if (numbits == 0x20) goto LAB_0010039b;
      uVar8 = uVar18;
      uVar14 = uVar19;
      uVar7 = uVar18;
      uVar17 = uVar19;
      if (numbits == 0x40) goto LAB_0010039b;
      if (0x20 < numbits) goto LAB_0010035b;
      uVar11 = (uint)in >> (bVar4 & 0x1f);
      in = (uchar *)(ulong)uVar11;
      bVar5 = (byte)(0x20 - numbits);
      uVar11 = uVar15 << (bVar5 & 0x1f) | uVar11;
      local_78 = uVar15 << 0x20 - numbits | local_78;
      uStack_74 = uVar18 | uStack_74;
      uVar15 = uVar18 << (bVar5 & 0x1f) | uVar15 >> (bVar4 & 0x1f);
      bVar16 = lVar13 != 0;
      lVar13 = lVar13 + -1;
      if (bVar16) {
        local_48._4_1_ = (char)uStack_74;
        local_48._5_1_ = (char)(uStack_74 >> 8);
        local_48._6_1_ = (char)(uStack_74 >> 0x10);
        local_48._7_1_ = (char)(uStack_74 >> 0x18);
        local_48._0_1_ = (char)local_78;
        local_48._1_1_ = (char)(local_78 >> 8);
        local_48._2_1_ = (char)(local_78 >> 0x10);
        local_48._3_1_ = (char)(local_78 >> 0x18);
        local_78 = local_78 >> uVar9;
        uStack_74 = uStack_74 >> uVar9;
        DES_encrypt1((uint *)&local_48,schedule,1);
        in = (uchar *)(ulong)uVar11;
        local_90 = local_90 + uVar12;
        uVar20 = CONCAT44((uint)local_48,uVar15);
        uVar11 = local_48._4_4_;
        uVar8 = (uint)local_48;
        uVar19 = local_48._4_4_;
        uVar18 = (uint)local_48;
LAB_001002ad:
        local_90 = local_90 + uVar12;
        uVar11 = local_54 & uVar11;
        uVar8 = local_58 & uVar8;
        puVar10 = out + uVar12;
        uVar14 = uVar15;
        switch(uVar12) {
        default:
          goto switchD_001002df_caseD_0;
        case 1:
switchD_001002df_caseD_1:
          do {
            puVar10[-1] = (uchar)uVar8;
            out = puVar10 + (uVar12 - 1);
            uVar8 = uVar15;
            uVar14 = uVar18;
            uVar7 = uVar15;
            uVar17 = uVar18;
            if ((numbits != 0x20) &&
               (uVar8 = uVar18, uVar14 = uVar19, uVar7 = uVar18, uVar17 = uVar19, numbits != 0x40))
            {
              if (numbits < 0x21) {
                uVar8 = (uint)in >> (bVar4 & 0x1f);
                in = (uchar *)(ulong)uVar8;
                bVar5 = (byte)(0x20 - numbits);
                uVar8 = uVar15 << (bVar5 & 0x1f) | uVar8;
                uVar14 = uVar18 << (bVar5 & 0x1f) | uVar15 >> (bVar4 & 0x1f);
                uVar7 = uVar15 << 0x20 - numbits | local_78;
                uVar17 = uVar18 | uStack_74;
              }
              else {
LAB_0010035b:
                uVar11 = numbits - 0x20;
                bVar5 = (byte)(0x40 - numbits);
                uVar8 = uVar18 << (bVar5 & 0x1f);
                in = (uchar *)(ulong)uVar8;
                uVar8 = uVar15 >> ((byte)uVar11 & 0x1f) | uVar8;
                uVar14 = uVar18 >> ((byte)uVar11 & 0x1f) | uVar19 << (bVar5 & 0x1f);
                uVar7 = uVar18 << 0x40 - numbits | (uint)uVar20 >> (ulong)uVar11;
                uVar17 = uVar19 | (uint)((ulong)uVar20 >> 0x20) >> (ulong)uVar11;
              }
            }
LAB_0010039b:
            bVar16 = lVar13 == 0;
            lVar13 = lVar13 + -1;
            uVar11 = uVar8;
            uVar15 = uVar14;
            if (bVar16) goto LAB_00100150;
            local_48._4_1_ = (char)uVar17;
            local_48._5_1_ = (char)(uVar17 >> 8);
            local_48._6_1_ = (char)(uVar17 >> 0x10);
            local_48._7_1_ = (char)(uVar17 >> 0x18);
            local_48._0_1_ = (char)uVar7;
            local_48._1_1_ = (char)(uVar7 >> 8);
            local_48._2_1_ = (char)(uVar7 >> 0x10);
            local_48._3_1_ = (char)(uVar7 >> 0x18);
            local_78 = uVar7 >> uVar9;
            uStack_74 = uVar17 >> uVar9;
            DES_encrypt1((uint *)&local_48,schedule,1);
            local_90 = local_90 + uVar12;
            uVar20 = CONCAT44((uint)local_48,uVar14);
            uVar19 = local_48._4_4_;
            uVar18 = (uint)local_48;
            switch(uVar12) {
            default:
              goto switchD_0010042f_caseD_0;
            case 1:
              in = (uchar *)(ulong)uVar8;
              uVar8 = (local_90[-1] ^ (uint)local_48) & local_58;
              puVar10 = out + 1;
              goto switchD_001002df_caseD_1;
            case 2:
              in = (uchar *)(ulong)uVar8;
              puVar10 = out + 2;
              uVar8 = (*(ushort *)(local_90 + -2) ^ (uint)local_48) & local_58;
              goto LAB_00100332;
            case 3:
              in = (uchar *)(ulong)uVar8;
              uVar8 = (((uint)local_90[-1] << 0x10 | (uint)local_90[-2] << 8 | (uint)local_90[-3]) ^
                      (uint)local_48) & local_58;
              puVar10 = out + 3;
              break;
            case 4:
              in = (uchar *)(ulong)uVar8;
              puVar6 = out + 4;
              uVar8 = (((uint)local_90[-3] << 8 |
                        (uint)local_90[-2] << 0x10 | (uint)local_90[-1] << 0x18 | (uint)local_90[-4]
                       ) ^ (uint)local_48) & local_58;
LAB_00100314:
              puVar10 = puVar6 + -1;
              puVar6[-1] = (uchar)(uVar8 >> 0x18);
              break;
            case 5:
              goto switchD_0010013c_caseD_5;
            case 6:
              goto switchD_0010013c_caseD_6;
            case 7:
              goto switchD_0010013c_caseD_7;
            case 8:
              goto switchD_0010013c_caseD_8;
            }
switchD_001002df_caseD_3:
            puVar10[-1] = (uchar)(uVar8 >> 0x10);
            puVar10 = puVar10 + -1;
LAB_00100332:
            puVar10[-1] = (uchar)(uVar8 >> 8);
            puVar10 = puVar10 + -1;
            uVar15 = uVar14;
          } while( true );
        case 2:
          goto LAB_00100332;
        case 3:
          goto switchD_001002df_caseD_3;
        case 4:
          puVar6 = puVar10;
          goto LAB_00100314;
        case 5:
          goto switchD_001002df_caseD_5;
        case 6:
          puVar6 = puVar10;
          break;
        case 8:
          puVar10 = puVar10 + -1;
          *puVar10 = (uchar)(uVar11 >> 0x18);
        case 7:
          puVar10[-1] = (uchar)(uVar11 >> 0x10);
          puVar6 = puVar10 + -1;
        }
        puVar10 = puVar6 + -1;
        puVar6[-1] = (uchar)(uVar11 >> 8);
switchD_001002df_caseD_5:
        puVar10[-1] = (uchar)uVar11;
        puVar6 = puVar10 + -1;
        goto LAB_00100314;
      }
    }
LAB_00100150:
    uVar9 = (ulong)(byte)(uVar11 >> 8);
    *ivec = (DES_cblock)
            ((((((((ulong)(uVar15 >> 0x18) << 8 | (ulong)(uVar15 >> 0x10 & 0xff)) << 8 |
                 (ulong)(byte)(uVar15 >> 8)) << 8 | (ulong)(uVar15 & 0xff)) << 8 |
               (ulong)(uVar11 >> 0x18)) << 8 | (ulong)(uVar11 >> 0x10 & 0xff)) << 8 | uVar9) << 8 |
            (ulong)(uVar11 & 0xff));
    out = *ivec;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in,out,uVar9);
switchD_0010013c_caseD_8:
  pbVar1 = local_90 + -1;
  local_90 = local_90 + -1;
  uVar15 = (uint)*pbVar1 << 0x18;
  uVar18 = (uint)local_48;
  goto LAB_0010021a;
switchD_0010013c_caseD_7:
  uVar15 = 0;
LAB_0010021a:
  pbVar1 = local_90 + -1;
  local_90 = local_90 + -1;
  uVar15 = (uint)*pbVar1 << 0x10 | uVar15;
LAB_0010023c:
  uVar15 = uVar15 | (uint)local_90[-1] << 8;
  local_90 = local_90 + -1;
LAB_0010024e:
  uVar11 = uVar19 ^ (local_90[-1] | uVar15);
  local_90 = local_90 + -1;
LAB_00100262:
  puVar10 = local_90 + -1;
  uVar7 = (uint)local_90[-1] << 0x18;
LAB_00100274:
  uVar7 = (uint)puVar10[-1] << 0x10 | uVar7;
  local_90 = puVar10 + -1;
LAB_00100287:
  puVar10 = local_90 + -1;
  uVar7 = uVar7 | (uint)local_90[-1] << 8;
  uVar15 = uVar14;
LAB_00100299:
  in = (uchar *)(ulong)uVar8;
  local_90 = puVar10 + -1;
  uVar8 = uVar18 ^ (puVar10[-1] | uVar7);
  goto LAB_001002ad;
switchD_0010013c_caseD_6:
  uVar15 = 0;
  uVar18 = (uint)local_48;
  goto LAB_0010023c;
switchD_0010013c_caseD_5:
  uVar15 = 0;
  uVar19 = local_48._4_4_;
  uVar18 = (uint)local_48;
  goto LAB_0010024e;
switchD_0010042f_caseD_0:
  in = (uchar *)(ulong)uVar8;
  uVar11 = local_48._4_4_;
  uVar8 = (uint)local_48;
  goto LAB_001002ad;
switchD_001002df_caseD_0:
  goto LAB_00100675;
}


