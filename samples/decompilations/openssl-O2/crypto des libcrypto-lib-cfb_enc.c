
void DES_cfb_encrypt(uchar *in,uchar *out,int numbits,long length,DES_key_schedule *schedule,
                    DES_cblock *ivec,int enc)

{
  byte bVar1;
  unkuint9 Var2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined1 auVar6 [16];
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  uchar *puVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  undefined8 uVar21;
  undefined8 uVar22;
  byte *local_a8;
  uint local_60;
  uint local_5c;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x3f < numbits - 1U) goto LAB_0010015d;
  iVar7 = numbits >> 3;
  iVar19 = numbits + 7 >> 3;
  uVar18 = (ulong)iVar19;
  bVar3 = (byte)numbits;
  uVar10 = *(uint *)*ivec;
  uVar11 = *(uint *)(*ivec + 4);
  uVar12 = (ulong)uVar11;
  if (enc == 0) {
    if (uVar18 <= (ulong)length) {
      uVar20 = length - uVar18;
      local_60 = uVar10;
      local_5c = uVar11;
      DES_encrypt1(&local_60,schedule,1);
      local_a8 = in + uVar18;
      switch(iVar19) {
      default:
        uVar16 = 0;
        uVar8 = 0;
        uVar17 = uVar10;
        break;
      case 2:
        uVar16 = 0;
        uVar8 = 0;
        goto LAB_001005fb;
      case 3:
        uVar16 = 0;
        uVar8 = 0;
        goto LAB_001005ea;
      case 4:
        goto switchD_001001f0_caseD_4;
      case 5:
        goto switchD_001001f0_caseD_5;
      case 6:
        goto switchD_001001f0_caseD_6;
      case 7:
        goto switchD_001001f0_caseD_7;
      case 8:
        goto switchD_001001f0_caseD_8;
      }
LAB_0010060c:
      uVar10 = uVar11;
      pbVar13 = local_a8 + -1;
      local_a8 = local_a8 + (uVar18 - 1);
      uVar8 = *pbVar13 | uVar8;
      if (numbits == 0x20) {
        uVar12 = (ulong)uVar8;
        goto LAB_00100674;
      }
      if (numbits == 0x40) {
        uVar12 = (ulong)uVar16;
        uVar10 = uVar8;
        goto LAB_00100674;
      }
      local_58._4_4_ = uVar10;
      local_58._0_4_ = uVar17;
      local_58._12_4_ = uVar16;
      local_58._8_4_ = uVar8;
joined_r0x00100656:
      bVar15 = bVar3 & 7;
      if ((numbits & 7U) != 0) goto LAB_001007f3;
      local_58._0_8_ = *(undefined8 *)(local_58 + iVar7);
LAB_0010066b:
      uVar12 = (ulong)(uint)local_58._4_4_;
      uVar10 = local_58._0_4_;
LAB_00100674:
      uVar8 = uVar8 ^ local_60;
      uVar16 = uVar16 ^ local_5c;
      pbVar13 = out + uVar18;
      switch(iVar19) {
      default:
LAB_001006ed:
        pbVar13[-1] = (byte)uVar8;
        out = pbVar13 + (uVar18 - 1);
        if (uVar18 <= uVar20) {
          uVar20 = uVar20 - uVar18;
          uVar11 = (uint)uVar12;
          local_60 = uVar10;
          local_5c = uVar11;
          DES_encrypt1(&local_60,schedule,1);
          local_a8 = local_a8 + uVar18;
          switch(iVar19) {
          default:
            bVar15 = (byte)(numbits & 7U);
            goto LAB_00100a0b;
          case 2:
            goto switchD_00100752_caseD_2;
          case 3:
            local_58._4_4_ = uVar11;
            local_58._0_4_ = uVar10;
            uVar16 = 0;
            uVar8 = (uint)local_a8[-3] | (uint)local_a8[-2] << 8 | (uint)local_a8[-1] << 0x10;
            local_58._8_4_ = uVar8;
            local_58._12_4_ = 0;
            goto joined_r0x00100656;
          case 4:
            goto switchD_001001f0_caseD_4;
          case 5:
            goto switchD_001001f0_caseD_5;
          case 6:
            goto switchD_001001f0_caseD_6;
          case 7:
            goto switchD_001001f0_caseD_7;
          case 8:
            goto switchD_001001f0_caseD_8;
          }
        }
        goto LAB_001000f0;
      case 2:
        goto switchD_0010069d_caseD_2;
      case 3:
        pbVar9 = pbVar13;
        goto LAB_001006d9;
      case 4:
        goto switchD_0010069d_caseD_4;
      case 5:
        break;
      case 8:
        pbVar13 = pbVar13 + -1;
        *pbVar13 = (byte)(uVar16 >> 0x18);
      case 7:
        pbVar13 = pbVar13 + -1;
        *pbVar13 = (byte)(uVar16 >> 0x10);
      case 6:
        pbVar13[-1] = (byte)(uVar16 >> 8);
        pbVar13 = pbVar13 + -1;
      }
      pbVar13[-1] = (byte)uVar16;
      pbVar13 = pbVar13 + -1;
switchD_0010069d_caseD_4:
      pbVar13[-1] = (byte)(uVar8 >> 0x18);
      pbVar9 = pbVar13 + -1;
LAB_001006d9:
      pbVar13 = pbVar9 + -1;
      pbVar9[-1] = (byte)(uVar8 >> 0x10);
      goto switchD_0010069d_caseD_2;
    }
  }
  else if (uVar18 <= (ulong)length) {
    uVar20 = length - uVar18;
    local_60 = uVar10;
    local_5c = uVar11;
    DES_encrypt1(&local_60,schedule,1);
    pbVar13 = in + uVar18;
    local_a8 = pbVar13;
    switch(iVar19) {
    default:
      uVar8 = 0;
      uVar16 = 0;
      break;
    case 2:
      uVar8 = 0;
      uVar16 = 0;
      goto LAB_00100256;
    case 3:
      uVar8 = 0;
      uVar16 = 0;
      goto LAB_00100245;
    case 4:
      uVar8 = 0;
      goto LAB_00100236;
    case 5:
      uVar8 = 0;
      goto LAB_00100228;
    case 6:
      goto switchD_001000e5_caseD_6;
    case 7:
      goto switchD_001000e5_caseD_7;
    case 8:
      goto switchD_001000e5_caseD_8;
    }
LAB_00100267:
    uVar8 = uVar8 ^ local_5c;
    out = out + uVar18;
    uVar21 = CONCAT44(uVar11,uVar10);
    uVar10 = (pbVar13[-1] | uVar16) ^ local_60;
    uVar12 = (ulong)uVar10;
    local_a8 = pbVar13 + (uVar18 - 1);
    uVar22 = CONCAT44(uVar8,uVar10);
    puVar14 = out;
    uVar10 = uVar11;
    switch(iVar19) {
    default:
switchD_001002b9_caseD_0:
      do {
        out[-1] = (uchar)uVar12;
        local_58._8_8_ = uVar22;
        local_58._0_8_ = uVar21;
        auVar4 = local_58;
        if ((numbits & 7U) != 0) {
LAB_00100548:
          pbVar13 = local_58;
          do {
            pbVar9 = pbVar13 + 1;
            *pbVar13 = pbVar13[iVar7] << (bVar3 & 7) |
                       (byte)((int)(uint)pbVar13[(long)iVar7 + 1] >> (8 - (bVar3 & 7) & 0x1f));
            pbVar13 = pbVar9;
          } while (pbVar9 != local_58 + 8);
          do {
            uVar12 = (ulong)(uint)local_58._4_4_;
            uVar10 = local_58._0_4_;
LAB_00100346:
            do {
              if (uVar20 < uVar18) goto LAB_001000f0;
              uVar20 = uVar20 - uVar18;
              uVar11 = (uint)uVar12;
              local_60 = uVar10;
              local_5c = uVar11;
              DES_encrypt1(&local_60,schedule,1);
              local_a8 = local_a8 + uVar18;
              uVar8 = local_5c;
              switch(iVar19) {
              default:
                uVar21 = CONCAT44(uVar11,uVar10);
                out = out + 1;
                uVar12 = (ulong)(local_a8[-1] ^ local_60);
                uVar22 = CONCAT44(local_5c,local_a8[-1] ^ local_60);
                goto switchD_001002b9_caseD_0;
              case 2:
                uVar21 = CONCAT44(uVar11,uVar10);
                puVar14 = out + 2;
                uVar12 = (ulong)(*(ushort *)(local_a8 + -2) ^ local_60);
                uVar22 = CONCAT44(local_5c,*(ushort *)(local_a8 + -2) ^ local_60);
                uVar10 = uVar11;
                goto switchD_001002b9_caseD_2;
              case 3:
                uVar21 = CONCAT44(uVar11,uVar10);
                out = out + 3;
                uVar10 = ((uint)local_a8[-3] | (uint)local_a8[-2] << 8 | (uint)local_a8[-1] << 0x10)
                         ^ local_60;
                uVar12 = (ulong)uVar10;
                uVar22 = CONCAT44(local_5c,uVar10);
                goto LAB_001002f4;
              case 4:
                uVar21 = CONCAT44(uVar11,uVar10);
                puVar14 = out + 4;
                uVar10 = ((uint)local_a8[-4] |
                         (uint)local_a8[-3] << 8 |
                         (uint)local_a8[-2] << 0x10 | (uint)local_a8[-1] << 0x18) ^ local_60;
                uVar12 = (ulong)uVar10;
                uVar22 = CONCAT44(local_5c,uVar10);
                break;
              case 5:
                uVar21 = CONCAT44(uVar11,uVar10);
                out = out + 5;
                uVar10 = ((uint)local_a8[-5] |
                         (uint)local_a8[-4] << 8 |
                         (uint)local_a8[-3] << 0x10 | (uint)local_a8[-2] << 0x18) ^ local_60;
                uVar8 = local_a8[-1] ^ local_5c;
                uVar12 = (ulong)uVar10;
                uVar22 = CONCAT44(uVar8,uVar10);
switchD_001002b9_caseD_5:
                out[-1] = (uchar)uVar8;
                puVar14 = out + -1;
                break;
              case 6:
                goto switchD_001000e5_caseD_6;
              case 7:
                goto switchD_001000e5_caseD_7;
              case 8:
                goto switchD_001000e5_caseD_8;
              }
LAB_001002e7:
              out = puVar14 + -1;
              puVar14[-1] = (uchar)(uVar12 >> 0x18);
LAB_001002f4:
              puVar14 = out + -1;
              out[-1] = (uchar)(uVar12 >> 0x10);
              uVar10 = uVar11;
switchD_001002b9_caseD_2:
              puVar14[-1] = (uchar)(uVar12 >> 8);
              puVar14[-2] = (uchar)uVar12;
              out = puVar14 + (uVar18 - 2);
            } while (numbits == 0x20);
            if (numbits == 0x40) {
              uVar10 = (uint)uVar12;
              uVar12 = (ulong)uVar8;
              goto LAB_00100346;
            }
            local_58._8_8_ = uVar22;
            local_58._0_8_ = uVar21;
            if ((numbits & 7U) != 0) goto LAB_00100548;
            local_58._0_8_ = *(undefined8 *)(local_58 + iVar7);
          } while( true );
        }
        local_58._0_8_ = local_58._1_8_;
        auVar6 = local_58;
        uVar10 = (uint)((ulong)uVar21 >> 8);
        local_58._4_4_ = auVar4._5_4_;
        uVar5 = local_58._4_4_;
        uVar11 = local_58._4_4_;
        if (uVar20 == 0) goto LAB_001000e8;
        uVar20 = uVar20 - 1;
        out = out + 1;
        local_5c = local_58._4_4_;
        local_60 = uVar10;
        local_58 = auVar6;
        DES_encrypt1(&local_60,schedule,1);
        uVar12 = (ulong)(*local_a8 ^ local_60);
        uVar22 = CONCAT44(local_5c,*local_a8 ^ local_60);
        uVar21 = CONCAT44(uVar5,uVar10);
        local_a8 = local_a8 + 1;
      } while( true );
    case 2:
      goto switchD_001002b9_caseD_2;
    case 3:
      goto LAB_001002f4;
    case 4:
      puVar14 = out;
      goto LAB_001002e7;
    case 5:
      goto switchD_001002b9_caseD_5;
    case 6:
      break;
    case 8:
      puVar14 = out + -1;
      *puVar14 = (uchar)(uVar8 >> 0x18);
    case 7:
      out = puVar14 + -1;
      puVar14[-1] = (uchar)(uVar8 >> 0x10);
    }
    out[-1] = (uchar)(uVar8 >> 8);
    out = out + -1;
    goto switchD_001002b9_caseD_5;
  }
  goto LAB_001000f0;
switchD_001001f0_caseD_8:
  pbVar13 = local_a8 + -1;
  local_a8 = local_a8 + -1;
  uVar16 = (uint)*pbVar13 << 0x18;
  goto LAB_0010077a;
switchD_001001f0_caseD_7:
  uVar16 = 0;
LAB_0010077a:
  uVar16 = (uint)local_a8[-1] << 0x10 | uVar16;
  local_a8 = local_a8 + -1;
LAB_001005ba:
  uVar16 = (uint)local_a8[-1] << 8 | uVar16;
  local_a8 = local_a8 + -1;
LAB_001005cb:
  uVar16 = local_a8[-1] | uVar16;
  local_a8 = local_a8 + -1;
LAB_001005db:
  pbVar13 = local_a8 + -1;
  local_a8 = local_a8 + -1;
  uVar8 = (uint)*pbVar13 << 0x18;
LAB_001005ea:
  uVar8 = (uint)local_a8[-1] << 0x10 | uVar8;
  local_a8 = local_a8 + -1;
LAB_001005fb:
  pbVar13 = local_a8 + -1;
  local_a8 = local_a8 + -1;
  uVar8 = (uint)*pbVar13 << 8 | uVar8;
  uVar17 = uVar10;
  goto LAB_0010060c;
switchD_001001f0_caseD_6:
  uVar16 = 0;
  goto LAB_001005ba;
switchD_001001f0_caseD_5:
  uVar16 = 0;
  goto LAB_001005cb;
switchD_001001f0_caseD_4:
  uVar16 = 0;
  goto LAB_001005db;
switchD_00100752_caseD_2:
  local_58._4_4_ = uVar11;
  local_58._0_4_ = uVar10;
  local_58._8_2_ = *(undefined2 *)(local_a8 + -2);
  uVar8 = (uint)(ushort)local_58._8_2_;
  local_58._10_6_ = 0;
  bVar15 = (byte)(numbits & 7U);
  if ((numbits & 7U) != 0) goto LAB_00100930;
  uVar8 = uVar8 ^ local_60;
  pbVar13 = out + 2;
  local_58._0_8_ = *(undefined8 *)(local_58 + iVar7);
  local_58._10_6_ = 0;
  uVar10 = (uint)local_58._0_8_;
  uVar12 = (ulong)local_58._0_8_ >> 0x20;
switchD_0010069d_caseD_2:
  pbVar13[-1] = (byte)(uVar8 >> 8);
  pbVar13 = pbVar13 + -1;
  goto LAB_001006ed;
LAB_00100930:
  uVar16 = 0;
  goto LAB_001007f3;
LAB_00100a0b:
  bVar1 = local_a8[-1];
  uVar8 = (uint)bVar1;
  Var2 = CONCAT18(bVar1,CONCAT44(uVar11,uVar10));
  local_58._9_7_ = 0;
  local_58._0_9_ = Var2;
  if ((numbits & 7U) != 0) goto LAB_00100b73;
  local_58._1_8_ = (undefined8)(Var2 >> 8);
  local_58._0_8_ = local_58._1_8_;
  *out = bVar1 ^ (byte)local_60;
  local_58[8] = bVar1;
  local_58._9_7_ = 0;
  auVar6 = local_58;
  uVar10 = (uint)(CONCAT44(uVar11,uVar10) >> 8);
  local_58._4_4_ = (undefined4)(Var2 >> 0x28);
  uVar11 = local_58._4_4_;
  if (uVar20 == 0) goto LAB_001000e8;
  uVar20 = uVar20 - 1;
  local_a8 = local_a8 + 1;
  local_5c = local_58._4_4_;
  local_60 = uVar10;
  local_58 = auVar6;
  DES_encrypt1(&local_60,schedule,1);
  out = out + 1;
  goto LAB_00100a0b;
LAB_00100b73:
  uVar16 = 0;
LAB_001007f3:
  pbVar13 = local_58;
  do {
    pbVar9 = pbVar13 + 1;
    *pbVar13 = pbVar13[iVar7] << bVar15 |
               (byte)((int)(uint)pbVar13[(long)iVar7 + 1] >> (8 - (bVar3 & 7) & 0x1f));
    pbVar13 = pbVar9;
  } while (pbVar9 != local_58 + 8);
  goto LAB_0010066b;
switchD_001000e5_caseD_8:
  pbVar13 = local_a8 + -1;
  local_a8 = local_a8 + -1;
  uVar8 = (uint)*pbVar13 << 0x18;
  goto LAB_001001fa;
switchD_001000e5_caseD_7:
  uVar8 = 0;
LAB_001001fa:
  uVar8 = (uint)local_a8[-1] << 0x10 | uVar8;
  local_a8 = local_a8 + -1;
LAB_00100217:
  pbVar13 = local_a8 + -1;
  uVar8 = uVar8 | (uint)local_a8[-1] << 8;
LAB_00100228:
  uVar8 = pbVar13[-1] | uVar8;
  local_a8 = pbVar13 + -1;
LAB_00100236:
  pbVar13 = local_a8 + -1;
  uVar16 = (uint)local_a8[-1] << 0x18;
LAB_00100245:
  uVar16 = (uint)pbVar13[-1] << 0x10 | uVar16;
  local_a8 = pbVar13 + -1;
LAB_00100256:
  pbVar13 = local_a8 + -1;
  uVar16 = uVar16 | (uint)local_a8[-1] << 8;
  goto LAB_00100267;
switchD_001000e5_caseD_6:
  uVar8 = 0;
  goto LAB_00100217;
LAB_001000e8:
  local_58 = auVar6;
  uVar12 = (ulong)uVar11;
LAB_001000f0:
  *ivec = (DES_cblock)
          ((((((((uVar12 >> 0x18) << 8 | uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 8 & 0xff) << 8 |
              uVar12 & 0xff) << 8 | (ulong)(uVar10 >> 0x18)) << 8 | (ulong)(uVar10 >> 0x10 & 0xff))
            << 8 | (ulong)(byte)(uVar10 >> 8)) << 8 | (ulong)(uVar10 & 0xff));
LAB_0010015d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


