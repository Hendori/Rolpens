
void DES_ofb_encrypt(uchar *in,uchar *out,int numbits,long length,DES_key_schedule *schedule,
                    DES_cblock *ivec)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  uchar *puVar9;
  uchar *puVar10;
  uchar *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  ulong uVar16;
  long lVar17;
  long in_FS_OFFSET;
  bool bVar18;
  DES_cblock auVar19;
  undefined1 auVar20 [16];
  uint uVar21;
  uint uVar22;
  undefined8 uVar23;
  long local_90;
  ulong local_78;
  uint local_6c;
  uint local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x40 < numbits) goto LAB_001001d4;
  bVar3 = (byte)numbits;
  if (numbits < 0x21) {
    if (numbits != 0x20) {
      local_50 = 0;
      local_6c = (int)(1L << (bVar3 & 0x3f)) - 1;
      goto LAB_0010006f;
    }
    auVar19 = *ivec;
    uVar12 = *(uint *)(*ivec + 4);
    lVar17 = length + -1;
    if (length < 1) {
      uVar12 = auVar19._0_4_;
      uVar13 = auVar19._4_4_;
    }
    else {
      puVar11 = out + 4;
      local_48 = auVar19;
      DES_encrypt1((uint *)&local_48,schedule,1);
      uVar2 = ((uint)*(ushort *)in | (uint)in[2] << 0x10 | (uint)in[3] << 0x18) ^ (uint)local_48;
      puVar15 = (ushort *)(in + 4);
      uVar14 = auVar19._4_4_;
      uVar13 = (uint)local_48;
      while( true ) {
        puVar11[-3] = (uchar)(uVar2 >> 8);
        puVar11[-4] = (uchar)uVar2;
        puVar11[-1] = (uchar)(uVar2 >> 0x18);
        puVar11[-2] = (uchar)(uVar2 >> 0x10);
        bVar18 = lVar17 == 0;
        lVar17 = lVar17 + -1;
        if (bVar18) break;
        local_48._4_1_ = (char)uVar13;
        local_48._5_1_ = (char)(uVar13 >> 8);
        local_48._6_1_ = (char)(uVar13 >> 0x10);
        local_48._7_1_ = (char)(uVar13 >> 0x18);
        local_48._0_1_ = (char)uVar14;
        local_48._1_1_ = (char)(uVar14 >> 8);
        local_48._2_1_ = (char)(uVar14 >> 0x10);
        local_48._3_1_ = (char)(uVar14 >> 0x18);
        puVar11 = puVar11 + 4;
        DES_encrypt1((uint *)&local_48,schedule,1);
        uVar2 = ((uint)*puVar15 |
                (uint)(byte)puVar15[1] << 0x10 | (uint)*(byte *)((long)puVar15 + 3) << 0x18) ^
                (uint)local_48;
        puVar15 = puVar15 + 2;
        uVar12 = uVar13;
        uVar14 = uVar13;
        uVar13 = (uint)local_48;
      }
    }
  }
  else {
    if (numbits == 0x40) {
      local_50 = 0xffffffff;
      local_6c = 0xffffffff;
    }
    else {
      local_6c = 0xffffffff;
      local_50 = (int)(1L << (bVar3 - 0x20 & 0x3f)) - 1;
    }
LAB_0010006f:
    auVar19 = *ivec;
    uVar12 = auVar19._0_4_;
    uVar13 = auVar19._4_4_;
    if (0 < length) {
      local_90 = length + -1;
      uVar14 = *(uint *)*ivec;
      uVar13 = *(uint *)(*ivec + 4);
      iVar8 = numbits + 0xe;
      if (-1 < numbits + 7) {
        iVar8 = numbits + 7;
      }
      uVar6 = (ulong)(uint)numbits;
      local_78 = CONCAT44(auVar19._4_4_ >> uVar6,uVar12 >> uVar6);
      uVar16 = (ulong)(uint)(iVar8 >> 3);
      puVar11 = in + uVar16;
      local_48 = auVar19;
      DES_encrypt1((uint *)&local_48,schedule,1);
      uVar2 = (uint)local_48;
      auVar20._8_8_ = 0;
      auVar20[0] = (uchar)local_48;
      auVar20[1] = local_48._1_1_;
      auVar20[2] = local_48._2_1_;
      auVar20[3] = local_48._3_1_;
      auVar20[4] = local_48._4_1_;
      auVar20[5] = local_48._5_1_;
      auVar20[6] = local_48._6_1_;
      auVar20[7] = local_48._7_1_;
      uVar23 = CONCAT44(uVar2,uVar13);
      uVar22 = local_48._4_4_;
      uVar12 = uVar14;
      uVar21 = local_48._4_4_;
      switch(uVar16) {
      default:
        puVar11 = puVar11 + uVar16;
        puVar10 = out + uVar16;
        break;
      case 1:
        uVar12 = 0;
        goto LAB_001003f1;
      case 2:
        uVar12 = 0;
        goto LAB_001003e1;
      case 3:
        uVar12 = 0;
        goto LAB_001003d1;
      case 4:
        goto LAB_001003c6;
      case 5:
        uVar21 = 0;
        goto LAB_001003b7;
      case 6:
        uVar21 = 0;
        goto LAB_001003a9;
      case 7:
        goto switchD_00100563_caseD_7;
      case 8:
        goto switchD_00100563_caseD_8;
      }
switchD_0010042a_caseD_0:
      auVar19 = auVar20._0_8_;
      out = puVar10 + uVar16;
      uVar12 = uVar2;
      if (numbits == 0x40) goto LAB_001004cd;
      if (numbits < 0x21) goto LAB_0010048f;
      uVar14 = numbits - 0x20;
      local_90 = local_90 + -1;
      bVar4 = (byte)(0x40 - numbits);
      uVar21 = uVar13 >> (ulong)uVar14;
      uVar12 = uVar2 << (bVar4 & 0x1f) | uVar13 >> ((byte)uVar14 & 0x1f);
      uVar13 = uVar22 << (bVar4 & 0x1f) | uVar2 >> ((byte)uVar14 & 0x1f);
      uVar21 = auVar20._0_4_ << 0x40 - numbits | uVar21;
      uVar14 = auVar20._4_4_ | uVar2 >> (ulong)uVar14;
      if (local_90 != -1) {
        local_78 = CONCAT44(uVar14 >> uVar6,uVar21 >> uVar6);
        local_48._4_1_ = (char)uVar14;
        local_48._5_1_ = (char)(uVar14 >> 8);
        local_48._6_1_ = (char)(uVar14 >> 0x10);
        local_48._7_1_ = (char)(uVar14 >> 0x18);
        local_48._0_1_ = (char)uVar21;
        local_48._1_1_ = (char)(uVar21 >> 8);
        local_48._2_1_ = (char)(uVar21 >> 0x10);
        local_48._3_1_ = (char)(uVar21 >> 0x18);
        DES_encrypt1((uint *)&local_48,schedule,1);
        auVar20._8_8_ = 0;
        auVar20[0] = (uchar)local_48;
        auVar20[1] = local_48._1_1_;
        auVar20[2] = local_48._2_1_;
        auVar20[3] = local_48._3_1_;
        auVar20[4] = local_48._4_1_;
        auVar20[5] = local_48._5_1_;
        auVar20[6] = local_48._6_1_;
        auVar20[7] = local_48._7_1_;
        puVar11 = puVar11 + uVar16;
        uVar7 = (ulong)local_48 & 0xffffffff;
        uVar23 = CONCAT44((uint)local_48,uVar13);
        uVar2 = (uint)local_48;
        uVar22 = local_48._4_4_;
        uVar21 = local_48._4_4_;
        uVar14 = uVar12;
LAB_001003fe:
        puVar10 = out + uVar16;
        puVar11 = puVar11 + uVar16;
        uVar5 = (uint)uVar7 & local_6c;
        uVar21 = uVar21 & local_50;
        puVar9 = puVar10;
        uVar12 = uVar14;
        switch(uVar16) {
        default:
          goto switchD_0010042a_caseD_0;
        case 1:
switchD_0010042a_caseD_1:
          do {
            auVar19 = auVar20._0_8_;
            puVar10[-1] = (uchar)uVar5;
            out = puVar10 + (uVar16 - 1);
            uVar12 = uVar2;
            if (numbits != 0x40) {
              if (numbits < 0x21) {
LAB_0010048f:
                bVar4 = (byte)(0x20 - numbits);
                auVar19 = (DES_cblock)
                          (local_78 |
                          CONCAT44((int)((ulong)uVar23 >> 0x20),(int)uVar23 << 0x20 - numbits));
                uVar12 = uVar13 << (bVar4 & 0x1f) | uVar14 >> (bVar3 & 0x1f);
                uVar22 = uVar13 >> (bVar3 & 0x1f) | uVar2 << (bVar4 & 0x1f);
              }
              else {
                uVar14 = numbits - 0x20;
                bVar4 = (byte)(0x40 - numbits);
                auVar19 = (DES_cblock)
                          (CONCAT44(auVar20._4_4_,auVar20._0_4_ << 0x40 - numbits) |
                          CONCAT44(uVar2 >> (ulong)uVar14,uVar13 >> (ulong)uVar14));
                uVar12 = uVar2 << (bVar4 & 0x1f) | uVar13 >> ((byte)uVar14 & 0x1f);
                uVar22 = uVar22 << (bVar4 & 0x1f) | uVar2 >> ((byte)uVar14 & 0x1f);
              }
            }
LAB_001004cd:
            uVar13 = uVar22;
            local_90 = local_90 + -1;
            if (local_90 == -1) goto LAB_0010015f;
            puVar11 = puVar11 + uVar16;
            local_78 = CONCAT44(auVar19._4_4_ >> uVar6,auVar19._0_4_ >> uVar6);
            local_48 = auVar19;
            DES_encrypt1((uint *)&local_48,schedule,1);
            auVar20._8_8_ = 0;
            auVar20[0] = (uchar)local_48;
            auVar20[1] = local_48._1_1_;
            auVar20[2] = local_48._2_1_;
            auVar20[3] = local_48._3_1_;
            auVar20[4] = local_48._4_1_;
            auVar20[5] = local_48._5_1_;
            auVar20[6] = local_48._6_1_;
            auVar20[7] = local_48._7_1_;
            uVar7 = (ulong)local_48 & 0xffffffff;
            uVar23 = CONCAT44((uint)local_48,uVar13);
            uVar14 = uVar12;
            uVar2 = (uint)local_48;
            uVar22 = local_48._4_4_;
            switch(uVar16) {
            default:
              goto switchD_00100563_caseD_0;
            case 1:
              puVar10 = out + 1;
              uVar5 = ((uint)local_48 ^ puVar11[-1]) & local_6c;
              goto switchD_0010042a_caseD_1;
            case 2:
              uVar5 = local_6c & (*(ushort *)(puVar11 + -2) ^ (uint)local_48);
              puVar10 = out + 2;
              goto LAB_00100470;
            case 3:
              puVar9 = out + 3;
              uVar5 = local_6c &
                      (((uint)puVar11[-2] << 8 | (uint)puVar11[-1] << 0x10 | (uint)puVar11[-3]) ^
                      (uint)local_48);
              break;
            case 4:
              puVar10 = out + 4;
              uVar5 = local_6c &
                      (((uint)puVar11[-3] << 8 |
                        (uint)puVar11[-2] << 0x10 | (uint)puVar11[-1] << 0x18 | (uint)puVar11[-4]) ^
                      (uint)local_48);
LAB_00100457:
              puVar9 = puVar10 + -1;
              puVar10[-1] = (uchar)(uVar5 >> 0x18);
              break;
            case 5:
              uVar21 = 0;
              goto LAB_001003b7;
            case 6:
              uVar21 = 0;
              goto LAB_001003a9;
            case 7:
              goto switchD_00100563_caseD_7;
            case 8:
              goto switchD_00100563_caseD_8;
            }
switchD_0010042a_caseD_3:
            puVar10 = puVar9 + -1;
            puVar9[-1] = (uchar)(uVar5 >> 0x10);
LAB_00100470:
            puVar10[-1] = (uchar)(uVar5 >> 8);
            puVar10 = puVar10 + -1;
            uVar14 = uVar12;
          } while( true );
        case 2:
          goto LAB_00100470;
        case 3:
          goto switchD_0010042a_caseD_3;
        case 4:
          goto LAB_00100457;
        case 5:
          goto switchD_0010042a_caseD_5;
        case 6:
          break;
        case 8:
          puVar10 = puVar10 + -1;
          *puVar10 = (uchar)(uVar21 >> 0x18);
        case 7:
          puVar10[-1] = (uchar)(uVar21 >> 0x10);
          puVar10 = puVar10 + -1;
        }
        puVar10[-1] = (uchar)(uVar21 >> 8);
        puVar10 = puVar10 + -1;
switchD_0010042a_caseD_5:
        puVar10[-1] = (uchar)uVar21;
        puVar10 = puVar10 + -1;
        goto LAB_00100457;
      }
    }
  }
LAB_0010015f:
  *ivec = (DES_cblock)
          ((((((((ulong)(uVar13 >> 0x18) << 8 | (ulong)(uVar13 >> 0x10 & 0xff)) << 8 |
               (ulong)(byte)(uVar13 >> 8)) << 8 | (ulong)(uVar13 & 0xff)) << 8 |
             (ulong)(uVar12 >> 0x18)) << 8 | (ulong)(uVar12 >> 0x10 & 0xff)) << 8 |
           (ulong)(byte)(uVar12 >> 8)) << 8 | (ulong)(uVar12 & 0xff));
LAB_001001d4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00100563_caseD_8:
  pbVar1 = puVar11 + -1;
  puVar11 = puVar11 + -1;
  uVar21 = (uint)*pbVar1 << 0x18;
  uVar22 = local_48._4_4_;
  goto LAB_0010038d;
switchD_00100563_caseD_7:
  uVar21 = 0;
  uVar22 = local_48._4_4_;
LAB_0010038d:
  pbVar1 = puVar11 + -1;
  puVar11 = puVar11 + -1;
  uVar21 = (uint)*pbVar1 << 0x10 | uVar21;
  uVar12 = uVar14;
LAB_001003a9:
  pbVar1 = puVar11 + -1;
  puVar11 = puVar11 + -1;
  uVar21 = (uint)*pbVar1 << 8 | uVar21;
LAB_001003b7:
  pbVar1 = puVar11 + -1;
  puVar11 = puVar11 + -1;
  uVar21 = uVar22 ^ (*pbVar1 | uVar21);
  uVar14 = uVar12;
LAB_001003c6:
  pbVar1 = puVar11 + -1;
  puVar11 = puVar11 + -1;
  uVar12 = (uint)*pbVar1 << 0x18;
LAB_001003d1:
  pbVar1 = puVar11 + -1;
  puVar11 = puVar11 + -1;
  uVar12 = uVar12 | (uint)*pbVar1 << 0x10;
LAB_001003e1:
  pbVar1 = puVar11 + -1;
  puVar11 = puVar11 + -1;
  uVar12 = (uint)*pbVar1 << 8 | uVar12;
LAB_001003f1:
  pbVar1 = puVar11 + -1;
  puVar11 = puVar11 + -1;
  uVar7 = (ulong)(uVar2 ^ (*pbVar1 | uVar12));
  goto LAB_001003fe;
switchD_00100563_caseD_0:
  uVar21 = local_48._4_4_;
  goto LAB_001003fe;
}


