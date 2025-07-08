void DES_cfb_encrypt(uchar *in, uchar *out, int numbits, long length, DES_key_schedule *schedule, DES_cblock *ivec, int enc) {
   byte *pbVar1;
   byte *pbVar2;
   sbyte sVar3;
   undefined1 auVar4[16];
   int iVar5;
   byte bVar6;
   uint uVar7;
   ulong *puVar8;
   ulong uVar9;
   int iVar10;
   ulong uVar11;
   uchar *puVar12;
   byte *pbVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   ulong uVar17;
   uchar *puVar18;
   byte bVar19;
   uint uVar20;
   ulong uVar21;
   byte *pbVar22;
   ulong uVar23;
   ulong uVar24;
   long in_FS_OFFSET;
   ulong uVar25;
   undefined8 uVar26;
   uint local_60;
   uint local_5c;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0x3f < numbits - 1U) goto LAB_0010027f;
   iVar10 = numbits >> 3;
   uVar16 = numbits & 7;
   uVar14 = *(uint*)*ivec;
   iVar5 = numbits + 7 >> 3;
   uVar7 = *(uint*)( *ivec + 4 );
   uVar23 = (ulong)iVar5;
   sVar3 = (sbyte)uVar16;
   if (enc == 0) {
      if ((ulong)length < uVar23) goto LAB_001003f8;
      if (numbits != 0x20) {
         uVar17 = length - uVar23;
         local_60 = uVar14;
         local_5c = uVar7;
         DES_encrypt1(&local_60, schedule, 1);
         puVar12 = in + uVar23;
         uVar24 = uVar23;
         switch (iVar5) {
            default:
        uVar21 = 0;
        uVar20 = 0;
        puVar18 = puVar12;
        break;
            case 2:
        uVar21 = 0;
        uVar20 = 0;
        goto LAB_00100464;
            case 3:
        uVar21 = 0;
        uVar20 = 0;
        goto LAB_00100457;
            case 4:
        uVar21 = 0;
        goto LAB_0010044c;
            case 5:
        uVar20 = 0;
        goto LAB_00100440;
            case 6:
        uVar20 = 0;
        goto LAB_00100433;
            case 7:
        uVar20 = 0;
        goto LAB_0010041c;
            case 8:
        goto switchD_001005a7_caseD_8;
         }

         LAB_00100471:uVar20 = puVar18[-1] | uVar20;
         uVar11 = (ulong)uVar20;
         puVar12 = puVar18 + ( uVar23 - 1 );
         uVar15 = (uint)uVar21;
         if (numbits == 0x40) goto LAB_001004d5;
         local_58._4_4_ = uVar7;
         local_58._0_4_ = uVar14;
         local_58._12_4_ = uVar15;
         local_58._8_4_ = uVar20;
         LAB_001004a0:puVar8 = (ulong*)( local_58 + iVar10 );
         if (uVar16 != 0) goto LAB_00100c55;
         local_58._0_8_ = *puVar8;
         LAB_001004cc:uVar15 = (uint)uVar21;
         uVar20 = (uint)uVar11;
         uVar11 = (ulong)(uint)local_58._0_4_;
         uVar21 = (ulong)(uint)local_58._4_4_;
         LAB_001004d5:uVar20 = uVar20 ^ local_60;
         uVar15 = uVar15 ^ local_5c;
         pbVar22 = out + uVar23;
         switch (uVar24 & 0xffffffff) {
            default:
        do {
          uVar14 = (uint)uVar11;
          uVar7 = (uint)uVar21;
          pbVar22[-1] = (byte)uVar20;
          out = pbVar22 + (uVar23 - 1);
          auVar4 = local_58;
          if (uVar17 < uVar23) goto LAB_00100210;
          uVar17 = uVar17 - uVar23;
          local_60 = uVar14;
          local_5c = uVar7;
          DES_encrypt1(&local_60,schedule,1);
          puVar12 = puVar12 + uVar23;
          switch(uVar24 & 0xffffffff) {
          default:
            puVar8 = (ulong *)(local_58 + iVar10);
            goto LAB_00100daa;
          case 2:
            local_58._8_2_ = *(undefined2 *)(puVar12 + -2);
            local_58._4_4_ = uVar7;
            local_58._0_4_ = uVar14;
            uVar14 = (uint)(ushort)local_58._8_2_;
            local_58._10_6_ = 0;
            puVar8 = (ulong *)(local_58 + iVar10);
            if (uVar16 != 0) goto LAB_00100c50;
            local_58._0_8_ = *puVar8;
            uVar20 = uVar14 ^ local_60;
            pbVar22 = out + 2;
            local_58._10_6_ = 0;
            uVar11 = local_58._0_8_ & 0xffffffff;
            uVar21 = (ulong)local_58._0_8_ >> 0x20;
            break;
          case 3:
            local_58._4_4_ = uVar7;
            local_58._0_4_ = uVar14;
            uVar14 = (uint)puVar12[-1] << 0x10 | (uint)puVar12[-2] << 8 | (uint)puVar12[-3];
            local_58._8_4_ = uVar14;
            local_58._12_4_ = 0;
            puVar8 = (ulong *)(local_58 + iVar10);
            if (uVar16 != 0) goto LAB_00100c50;
            local_58._0_8_ = *puVar8;
            uVar20 = uVar14 ^ local_60;
            pbVar13 = out + 3;
            local_58._12_4_ = 0;
            uVar11 = local_58._0_8_ & 0xffffffff;
            uVar21 = (ulong)local_58._0_8_ >> 0x20;
LAB_00100538:
            pbVar22 = pbVar13 + -1;
            pbVar13[-1] = (byte)(uVar20 >> 0x10);
            break;
          case 4:
            local_58._4_4_ = uVar7;
            local_58._0_4_ = uVar14;
            uVar21 = 0;
            uVar14 = (uint)puVar12[-3] << 8 | (uint)puVar12[-2] << 0x10 | (uint)puVar12[-1] << 0x18
                     | (uint)puVar12[-4];
            uVar11 = (ulong)uVar14;
            local_58._8_4_ = uVar14;
            local_58._12_4_ = 0;
            goto LAB_001004a0;
          case 5:
            uVar20 = 0;
            goto LAB_00100440;
          case 6:
            uVar20 = 0;
            goto LAB_00100433;
          case 7:
            uVar20 = 0;
            goto LAB_0010041c;
          case 8:
            goto switchD_001005a7_caseD_8;
          }
switchD_001004fc_caseD_2:
          pbVar22[-1] = (byte)(uVar20 >> 8);
          pbVar22 = pbVar22 + -1;
        } while( true );
            case 2:
        goto switchD_001004fc_caseD_2;
            case 3:
        pbVar13 = pbVar22;
        goto LAB_00100538;
            case 4:
        goto LAB_0010052c;
            case 5:
        goto switchD_001004fc_caseD_5;
            case 6:
        pbVar13 = pbVar22;
        break;
            case 8:
        pbVar22 = pbVar22 + -1;
        *pbVar22 = (byte)(uVar15 >> 0x18);
            case 7:
        pbVar22[-1] = (byte)(uVar15 >> 0x10);
        pbVar13 = pbVar22 + -1;
         }

         pbVar22 = pbVar13 + -1;
         pbVar13[-1] = ( byte )(uVar15 >> 8);
         switchD_001004fc_caseD_5:pbVar22[-1] = (byte)uVar15;
         pbVar22 = pbVar22 + -1;
         LAB_0010052c:pbVar22[-1] = ( byte )(uVar20 >> 0x18);
         pbVar13 = pbVar22 + -1;
         goto LAB_00100538;
      }

      uVar23 = length - 4;
      puVar12 = out + 4;
      local_60 = uVar14;
      local_5c = uVar7;
      DES_encrypt1(&local_60, schedule, 1);
      uVar14 = ( uint ) * in | (uint)in[1] << 8 | (uint)in[2] << 0x10 | (uint)in[3] << 0x18;
      uVar16 = local_60 ^ uVar14;
      pbVar22 = in + 4;
      while (true) {
         uVar21 = (ulong)uVar14;
         puVar12[-4] = (uchar)uVar16;
         for (int i = 0; i < 3; i++) {
            puVar12[( -1 - i )] = ( uchar )(uVar16 >> ( -8*i + 24 ));
         }

         if (uVar23 < 4) break;
         uVar23 = uVar23 - 4;
         puVar12 = puVar12 + 4;
         local_60 = uVar7;
         local_5c = uVar14;
         DES_encrypt1(&local_60, schedule, 1);
         uVar20 = ( uint ) * pbVar22 | (uint)pbVar22[1] << 8 | (uint)pbVar22[2] << 0x10 | (uint)pbVar22[3] << 0x18;
         uVar16 = local_60 ^ uVar20;
         pbVar22 = pbVar22 + 4;
         uVar7 = uVar14;
         uVar14 = uVar20;
      }
;
      uVar11 = (ulong)uVar7;
      auVar4 = local_58;
   }
 else if ((ulong)length < uVar23) {
      LAB_001003f8:uVar21 = (ulong)uVar7;
      uVar11 = (ulong)uVar14;
      auVar4 = local_58;
   }
 else {
      if (numbits != 0x20) {
         uVar17 = length - uVar23;
         pbVar22 = in + uVar23;
         local_60 = uVar14;
         local_5c = uVar7;
         DES_encrypt1(&local_60, schedule, 1);
         uVar24 = uVar23;
         switch (iVar5) {
            default:
        uVar20 = 0;
        uVar15 = 0;
        break;
            case 2:
        uVar20 = 0;
        uVar15 = 0;
        goto LAB_001007f0;
            case 3:
        uVar20 = 0;
        uVar15 = 0;
        goto LAB_001007e3;
            case 4:
        uVar20 = 0;
        goto LAB_001007d7;
            case 5:
        uVar20 = 0;
        goto LAB_001007cb;
            case 6:
        uVar20 = 0;
        goto LAB_001007bd;
            case 7:
        uVar20 = 0;
        goto LAB_001007a4;
            case 8:
        goto switchD_0010092b_caseD_8;
         }

         LAB_001007fe:uVar20 = uVar20 ^ local_5c;
         uVar21 = (ulong)uVar20;
         uVar25 = CONCAT44(uVar7, uVar14);
         out = out + uVar23;
         uVar14 = ( uVar15 | pbVar22[-1] ) ^ local_60;
         uVar9 = (ulong)uVar14;
         pbVar22 = pbVar22 + ( uVar23 - 1 );
         uVar26 = CONCAT44(uVar20, uVar14);
         puVar12 = out;
         switch (uVar24 & 0xffffffff) {
            default:
switchD_00100849_caseD_0:
        puVar8 = (ulong *)(local_58 + iVar10);
        uVar11 = uVar25;
        do {
          out[-1] = (uchar)uVar9;
          local_58._8_8_ = uVar26;
          local_58._0_8_ = uVar11;
          if (uVar16 != 0) {
            uVar24 = uVar24 & 0xffffffff;
LAB_00100ac0:
            auVar4 = local_58;
            bVar6 = 8 - sVar3;
            bVar19 = (char)*puVar8 << sVar3 |
                     (byte)((int)(uint)(byte)local_58[(long)iVar10 + 1] >> (bVar6 & 0x1f));
            local_58[0] = bVar19;
            local_58._2_14_ = auVar4._2_14_;
            local_58[1] = local_58[(long)iVar10 + 1] << sVar3 |
                          (byte)((int)(uint)(byte)local_58[(long)iVar10 + 2] >> (bVar6 & 0x1f));
            local_58._3_13_ = auVar4._3_13_;
            local_58[2] = local_58[(long)iVar10 + 2] << sVar3 |
                          (byte)((int)(uint)(byte)local_58[(long)iVar10 + 3] >> (bVar6 & 0x1f));
            local_58._4_12_ = auVar4._4_12_;
            local_58[3] = local_58[(long)iVar10 + 3] << sVar3 |
                          (byte)((int)(uint)(byte)local_58[(long)iVar10 + 4] >> (bVar6 & 0x1f));
            local_58._5_11_ = auVar4._5_11_;
            local_58[4] = (byte)((int)(uint)(byte)local_58[(long)iVar10 + 5] >> (bVar6 & 0x1f)) |
                          local_58[(long)iVar10 + 4] << sVar3;
            local_58._6_10_ = auVar4._6_10_;
            local_58[5] = (byte)((int)(uint)(byte)local_58[(long)(iVar10 + 5) + 1] >> (bVar6 & 0x1f)
                                ) | local_58[iVar10 + 5] << sVar3;
            local_58._7_9_ = auVar4._7_9_;
            local_58[6] = (byte)((int)(uint)(byte)local_58[(long)(iVar10 + 6) + 1] >> (bVar6 & 0x1f)
                                ) | local_58[iVar10 + 6] << sVar3;
            local_58._8_8_ = auVar4._8_8_;
            local_58[7] = (byte)((int)(uint)(byte)local_58[(long)(iVar10 + 7) + 1] >> (bVar6 & 0x1f)
                                ) | local_58[iVar10 + 7] << sVar3;
            do {
              uVar21 = (ulong)(uint)local_58._4_4_;
              uVar11 = (ulong)(uint)local_58._0_4_;
              do {
                uVar7 = (uint)uVar21;
                uVar14 = (uint)uVar11;
                auVar4 = local_58;
                if (uVar17 < uVar23) goto LAB_00100210;
                uVar17 = uVar17 - uVar23;
                pbVar22 = pbVar22 + uVar23;
                local_60 = uVar14;
                local_5c = uVar7;
                DES_encrypt1(&local_60,schedule,1);
                switch(uVar24 & 0xffffffff) {
                default:
                  uVar25 = CONCAT44(uVar7,uVar14);
                  out = out + 1;
                  uVar9 = (ulong)(pbVar22[-1] ^ local_60);
                  uVar26 = CONCAT44(local_5c,pbVar22[-1] ^ local_60);
                  goto switchD_00100849_caseD_0;
                case 2:
                  uVar25 = CONCAT44(uVar7,uVar14);
                  puVar12 = out + 2;
                  uVar21 = (ulong)local_5c;
                  uVar9 = (ulong)(*(ushort *)(pbVar22 + -2) ^ local_60);
                  uVar26 = CONCAT44(local_5c,*(ushort *)(pbVar22 + -2) ^ local_60);
                  goto switchD_00100849_caseD_2;
                case 3:
                  uVar25 = CONCAT44(uVar7,uVar14);
                  uVar21 = (ulong)local_5c;
                  uVar14 = ((uint)pbVar22[-3] | (uint)pbVar22[-1] << 0x10 | (uint)pbVar22[-2] << 8)
                           ^ local_60;
                  out = out + 3;
                  uVar9 = (ulong)uVar14;
                  uVar26 = CONCAT44(local_5c,uVar14);
                  goto LAB_00100888;
                case 4:
                  uVar25 = CONCAT44(uVar7,uVar14);
                  puVar12 = out + 4;
                  uVar21 = (ulong)local_5c;
                  uVar14 = ((uint)pbVar22[-4] |
                           (uint)pbVar22[-3] << 8 |
                           (uint)pbVar22[-2] << 0x10 | (uint)pbVar22[-1] << 0x18) ^ local_60;
                  uVar9 = (ulong)uVar14;
                  uVar26 = CONCAT44(local_5c,uVar14);
                  break;
                case 5:
                  uVar25 = CONCAT44(uVar7,uVar14);
                  uVar21 = (ulong)(pbVar22[-1] ^ local_5c);
                  uVar14 = ((uint)pbVar22[-5] |
                           (uint)pbVar22[-4] << 8 |
                           (uint)pbVar22[-3] << 0x10 | (uint)pbVar22[-2] << 0x18) ^ local_60;
                  out = out + 5;
                  uVar9 = (ulong)uVar14;
                  uVar26 = CONCAT44(pbVar22[-1] ^ local_5c,uVar14);
LAB_00100874:
                  out[-1] = (uchar)uVar21;
                  puVar12 = out + -1;
                  break;
                case 6:
                  uVar20 = 0;
                  goto LAB_001007bd;
                case 7:
                  uVar20 = 0;
                  goto LAB_001007a4;
                case 8:
                  goto switchD_0010092b_caseD_8;
                }
switchD_00100849_caseD_4:
                out = puVar12 + -1;
                puVar12[-1] = (uchar)(uVar9 >> 0x18);
LAB_00100888:
                puVar12 = out + -1;
                out[-1] = (uchar)(uVar9 >> 0x10);
switchD_00100849_caseD_2:
                puVar12[-2] = (uchar)uVar9;
                puVar12[-1] = (uchar)(uVar9 >> 8);
                out = puVar12 + (uVar23 - 2);
                uVar11 = uVar9;
              } while (numbits == 0x40);
              local_58._8_8_ = uVar26;
              local_58._0_8_ = uVar25;
              puVar8 = (ulong *)(local_58 + iVar10);
              if (uVar16 != 0) goto LAB_00100ac0;
              local_58._0_8_ = *puVar8;
            } while( true );
          }
          uVar11 = *puVar8;
          local_58._0_8_ = uVar11;
          auVar4 = local_58;
          local_58._4_4_ = (undefined4)(uVar11 >> 0x20);
          if (uVar17 == 0) {
            uVar21 = (ulong)(uint)local_58._4_4_;
            goto LAB_00100210;
          }
          local_60 = (uint)uVar11;
          uVar17 = uVar17 - 1;
          local_5c = local_58._4_4_;
          out = out + 1;
          local_58 = auVar4;
          DES_encrypt1(&local_60,schedule,1);
          uVar9 = (ulong)(*pbVar22 ^ local_60);
          uVar26 = CONCAT44(local_5c,*pbVar22 ^ local_60);
          pbVar22 = pbVar22 + 1;
        } while( true );
            case 2:
        goto switchD_00100849_caseD_2;
            case 3:
        goto LAB_00100888;
            case 4:
        goto switchD_00100849_caseD_4;
            case 5:
        goto LAB_00100874;
            case 6:
        goto switchD_00100849_caseD_6;
            case 7:
        break;
            case 8:
        out[-1] = (uchar)(uVar20 >> 0x18);
        out = out + -1;
         }

         puVar12 = out + -1;
         out[-1] = ( uchar )(uVar20 >> 0x10);
         switchD_00100849_caseD_6:out = puVar12 + -1;
         puVar12[-1] = ( uchar )(uVar20 >> 8);
         goto LAB_00100874;
      }

      uVar23 = length - 4;
      puVar12 = out + 4;
      local_60 = uVar14;
      local_5c = uVar7;
      DES_encrypt1(&local_60, schedule, 1);
      pbVar22 = in + 4;
      uVar14 = ( ( uint ) * in | (uint)in[1] << 8 | (uint)in[2] << 0x10 | (uint)in[3] << 0x18 ) ^ local_60;
      while (true) {
         puVar12[-4] = (uchar)uVar14;
         for (int i = 0; i < 3; i++) {
            puVar12[( -1 - i )] = ( uchar )(uVar14 >> ( -8*i + 24 ));
         }

         if (uVar23 < 4) break;
         uVar23 = uVar23 - 4;
         puVar12 = puVar12 + 4;
         local_60 = uVar7;
         local_5c = uVar14;
         DES_encrypt1(&local_60, schedule, 1);
         pbVar13 = pbVar22 + 3;
         pbVar1 = pbVar22 + 2;
         pbVar2 = pbVar22 + 1;
         bVar6 = *pbVar22;
         pbVar22 = pbVar22 + 4;
         uVar7 = uVar14;
         uVar14 = ( ( uint ) * pbVar2 << 8 | ( uint ) * pbVar1 << 0x10 | ( uint ) * pbVar13 << 0x18 | (uint)bVar6 ) ^ local_60;
      }
;
      uVar21 = (ulong)uVar14;
      uVar11 = (ulong)uVar7;
      auVar4 = local_58;
   }

   LAB_00100210:local_58 = auVar4;
   *ivec = ( DES_cblock )(( ( ( ( ( ( ( uVar21 >> 0x18 ) << 8 | uVar21 >> 0x10 & 0xff ) << 8 | uVar21 >> 8 & 0xff ) << 8 | uVar21 & 0xff ) << 8 | uVar11 >> 0x18 & 0xff ) << 8 | uVar11 >> 0x10 & 0xff ) << 8 | ( uVar11 & 0xffffffff ) >> 8 & 0xff ) << 8 | uVar11 & 0xff);
   LAB_0010027f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   switchD_001005a7_caseD_8:pbVar22 = puVar12 + -1;
   puVar12 = puVar12 + -1;
   uVar20 = ( uint ) * pbVar22 << 0x18;
   LAB_0010041c:pbVar22 = puVar12 + -1;
   puVar12 = puVar12 + -1;
   uVar20 = uVar20 | ( uint ) * pbVar22 << 0x10;
   LAB_00100433:uVar20 = uVar20 | (uint)puVar12[-1] << 8;
   puVar12 = puVar12 + -1;
   LAB_00100440:pbVar22 = puVar12 + -1;
   puVar12 = puVar12 + -1;
   uVar21 = ( ulong )(*pbVar22 | uVar20);
   LAB_0010044c:pbVar22 = puVar12 + -1;
   puVar12 = puVar12 + -1;
   uVar20 = ( uint ) * pbVar22 << 0x18;
   LAB_00100457:uVar20 = (uint)puVar12[-1] << 0x10 | uVar20;
   puVar12 = puVar12 + -1;
   LAB_00100464:puVar18 = puVar12 + -1;
   uVar20 = (uint)puVar12[-1] << 8 | uVar20;
   goto LAB_00100471;
   LAB_00100c50:uVar11 = (ulong)uVar14;
   uVar21 = 0;
   goto LAB_00100c55;
   LAB_00100daa:local_58[8] = puVar12[-1];
   local_58._0_4_ = (undefined4)uVar11;
   local_58._4_4_ = (int)uVar21;
   local_58._9_7_ = 0;
   if (uVar16 != 0) goto LAB_00100e2b;
   uVar11 = *puVar8;
   *out = local_58[8] ^ (byte)local_60;
   local_58._0_8_ = uVar11;
   local_58._9_7_ = 0;
   auVar4 = local_58;
   local_58._4_4_ = ( undefined4 )(uVar11 >> 0x20);
   uVar21 = (ulong)(uint)local_58._4_4_;
   if (uVar17 == 0) goto LAB_00100210;
   local_60 = (uint)uVar11;
   uVar17 = uVar17 - 1;
   puVar12 = puVar12 + 1;
   local_5c = local_58._4_4_;
   local_58 = auVar4;
   DES_encrypt1(&local_60, schedule, 1);
   out = out + 1;
   goto LAB_00100daa;
   LAB_00100e2b:uVar24 = uVar24 & 0xffffffff;
   uVar11 = (ulong)local_58[8];
   uVar21 = 0;
   LAB_00100c55:auVar4 = local_58;
   bVar6 = 8 - sVar3;
   bVar19 = ( byte )((int)(uint)(byte)local_58[(long)iVar10 + 1] >> ( bVar6 & 0x1f )) | (char)*puVar8 << sVar3;
   local_58[0] = bVar19;
   local_58._2_14_ = auVar4._2_14_;
   local_58[1] = ( byte )((int)(uint)(byte)local_58[(long)iVar10 + 2] >> ( bVar6 & 0x1f )) | local_58[(long)iVar10 + 1] << sVar3;
   local_58._3_13_ = auVar4._3_13_;
   local_58[2] = ( byte )((int)(uint)(byte)local_58[(long)iVar10 + 3] >> ( bVar6 & 0x1f )) | local_58[(long)iVar10 + 2] << sVar3;
   local_58._4_12_ = auVar4._4_12_;
   local_58[3] = ( byte )((int)(uint)(byte)local_58[(long)iVar10 + 4] >> ( bVar6 & 0x1f )) | local_58[(long)iVar10 + 3] << sVar3;
   local_58._5_11_ = auVar4._5_11_;
   local_58[4] = ( byte )((int)(uint)(byte)local_58[(long)iVar10 + 5] >> ( bVar6 & 0x1f )) | local_58[(long)iVar10 + 4] << sVar3;
   local_58._6_10_ = auVar4._6_10_;
   local_58[5] = ( byte )((int)(uint)(byte)local_58[(long)( iVar10 + 5 ) + 1] >> ( bVar6 & 0x1f )) | local_58[iVar10 + 5] << sVar3;
   local_58._7_9_ = auVar4._7_9_;
   local_58[6] = ( byte )((int)(uint)(byte)local_58[(long)( iVar10 + 6 ) + 1] >> ( bVar6 & 0x1f )) | local_58[iVar10 + 6] << sVar3;
   local_58._8_8_ = auVar4._8_8_;
   local_58[7] = ( byte )((int)(uint)(byte)local_58[(long)( iVar10 + 7 ) + 1] >> ( bVar6 & 0x1f )) | local_58[iVar10 + 7] << sVar3;
   goto LAB_001004cc;
   switchD_0010092b_caseD_8:pbVar13 = pbVar22 + -1;
   pbVar22 = pbVar22 + -1;
   uVar20 = ( uint ) * pbVar13 << 0x18;
   LAB_001007a4:pbVar13 = pbVar22 + -1;
   pbVar22 = pbVar22 + -1;
   uVar20 = ( uint ) * pbVar13 << 0x10 | uVar20;
   LAB_001007bd:pbVar13 = pbVar22 + -1;
   pbVar22 = pbVar22 + -1;
   uVar20 = ( uint ) * pbVar13 << 8 | uVar20;
   LAB_001007cb:pbVar13 = pbVar22 + -1;
   pbVar22 = pbVar22 + -1;
   uVar20 = *pbVar13 | uVar20;
   LAB_001007d7:pbVar13 = pbVar22 + -1;
   pbVar22 = pbVar22 + -1;
   uVar15 = ( uint ) * pbVar13 << 0x18;
   LAB_001007e3:uVar15 = (uint)pbVar22[-1] << 0x10 | uVar15;
   pbVar22 = pbVar22 + -1;
   LAB_001007f0:pbVar13 = pbVar22 + -1;
   pbVar22 = pbVar22 + -1;
   uVar15 = ( uint ) * pbVar13 << 8 | uVar15;
   goto LAB_001007fe;
}

