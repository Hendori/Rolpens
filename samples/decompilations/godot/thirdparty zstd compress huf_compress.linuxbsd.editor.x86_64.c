
void HUF_simpleQuickSort(long param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  
  uVar14 = (ulong)param_2;
  uVar13 = param_3 - param_2;
  if ((int)uVar13 < 8) {
    puVar2 = (uint *)(param_1 + uVar14 * 8);
    if (0 < (int)uVar13) {
      uVar14 = 0;
      do {
        uVar5 = puVar2[uVar14 * 2 + 2];
        uVar7 = puVar2[uVar14 * 2 + 3];
        uVar4 = *(undefined2 *)((long)puVar2 + uVar14 * 8 + 0xe);
        uVar8 = uVar14;
        do {
          if (uVar5 <= puVar2[uVar8 * 2]) {
            puVar9 = puVar2 + (long)((int)uVar8 + 1) * 2;
            break;
          }
          *(undefined8 *)(puVar2 + uVar8 * 2 + 2) = *(undefined8 *)(puVar2 + uVar8 * 2);
          uVar8 = uVar8 - 1;
          puVar9 = puVar2;
        } while ((int)uVar8 != -1);
        uVar14 = uVar14 + 1;
        *puVar9 = uVar5;
        *(short *)(puVar9 + 1) = (short)uVar7;
        *(undefined2 *)((long)puVar9 + 6) = uVar4;
        if (uVar14 == uVar13) {
          return;
        }
      } while( true );
    }
  }
  else if (param_2 < param_3) {
    do {
      iVar11 = (int)uVar14;
      iVar12 = iVar11 + -1;
      puVar2 = (uint *)(param_1 + (long)param_3 * 8);
      uVar13 = *puVar2;
      if (iVar11 < param_3) {
        puVar9 = (uint *)(param_1 + (long)iVar11 * 8);
        do {
          if (uVar13 < *puVar9) {
            iVar12 = iVar12 + 1;
            puVar3 = (uint *)(param_1 + (long)iVar12 * 8);
            uVar5 = *puVar3;
            uVar7 = puVar3[1];
            uVar4 = *(undefined2 *)((long)puVar3 + 6);
            *(undefined8 *)puVar3 = *(undefined8 *)puVar9;
            *puVar9 = uVar5;
            *(short *)(puVar9 + 1) = (short)uVar7;
            *(undefined2 *)((long)puVar9 + 6) = uVar4;
          }
          puVar9 = puVar9 + 2;
        } while ((uint *)(param_1 + ((ulong)(uint)(param_3 - iVar11) + (long)iVar11) * 8) != puVar9)
        ;
        iVar10 = (iVar12 + 1) - iVar11;
        iVar11 = iVar12 + 1;
      }
      else {
        iVar10 = 0;
      }
      puVar1 = (undefined8 *)(param_1 + 8 + (long)iVar12 * 8);
      uVar6 = *puVar1;
      *puVar1 = *(undefined8 *)puVar2;
      *(undefined8 *)puVar2 = uVar6;
      if (iVar10 < param_3 - iVar11) {
        HUF_simpleQuickSort(param_1,uVar14 & 0xffffffff,iVar12);
        uVar14 = (ulong)(iVar12 + 2);
      }
      else {
        HUF_simpleQuickSort(param_1,(ulong)(iVar12 + 2),param_3);
        param_3 = iVar12;
      }
    } while ((int)uVar14 < param_3);
  }
  return;
}



long HUF_closeCStream(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = param_1[2] + 0x8000000000000001;
  uVar4 = *param_1 >> 1 | 0x8000000000000000;
  *param_1 = uVar4;
  param_1[2] = (ulong)((uint)uVar3 & 7);
  puVar1 = (ulong *)param_1[5];
  uVar2 = param_1[6];
  *puVar1 = uVar4 >> (0x40U - (char)uVar3 & 0x3f);
  uVar3 = (long)puVar1 + ((uVar3 & 0xff) >> 3);
  if (uVar2 < uVar3) {
    param_1[5] = uVar2;
  }
  else {
    param_1[5] = uVar3;
    if (uVar3 != uVar2) {
      return ((uVar3 - param_1[4]) + 1) - (ulong)((char)param_1[2] == '\0');
    }
  }
  return 0;
}



undefined8
HUF_compress1X_usingCTable_internal_bmi2
          (ulong *param_1,ulong param_2,long param_3,ulong param_4,ulong *param_5)

{
  byte bVar1;
  undefined1 auVar2 [16];
  ulong *puVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  byte *pbVar20;
  int iVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulong *local_48;
  ulong *puStack_40;
  ulong *local_38;
  long local_30;
  
  uVar14 = *param_5;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (7 < param_2) {
    local_38 = (ulong *)((long)param_1 + (param_2 - 8));
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_48 = param_1;
    puStack_40 = param_1;
    if (param_2 != 8) {
      iVar17 = (int)param_4;
      uVar16 = param_4 & 0xffffffff;
      if ((param_2 < ((uVar14 & 0xff) * param_4 >> 3) + 8) || (0xb < (byte)uVar14)) {
        iVar21 = iVar17 % 4;
        if (0 < iVar21) {
          uVar14 = 0;
          local_68._0_8_ = 0;
          lVar9 = (long)iVar17 + -1;
          lVar19 = lVar9;
          lVar8 = (long)iVar17;
          while( true ) {
            lVar4 = lVar19;
            uVar16 = param_5[(ulong)*(byte *)(param_3 + -1 + lVar8) + 1];
            uVar14 = uVar14 + uVar16;
            local_68._0_8_ = (ulong)local_68._0_8_ >> (uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00;
            if (lVar4 == lVar9 - (ulong)(iVar21 - 1)) break;
            lVar19 = lVar4 + -1;
            lVar8 = lVar4;
          }
          uVar16 = (ulong)(uint)(iVar17 - iVar21);
          *param_1 = (ulong)local_68._0_8_ >> ((ulong)(0x40 - (int)(uVar14 & 0xff)) & 0x3f);
          puStack_40 = (ulong *)((long)param_1 + ((uVar14 & 0xff) >> 3));
          local_68._8_8_ = 0;
          if (local_38 <= puStack_40) {
            puStack_40 = local_38;
          }
          local_58 = ZEXT416((uint)uVar14 & 7);
        }
        auVar2 = local_58;
        iVar17 = (int)uVar16;
        if ((uVar16 & 7) != 0) {
          lVar9 = param_3 + iVar17;
          uVar14 = local_68._0_8_;
          do {
            pbVar11 = (byte *)(lVar9 + -1);
            lVar9 = lVar9 + -1;
            uVar16 = param_5[(ulong)*pbVar11 + 1];
            local_58._0_8_ = local_58._0_8_ + uVar16;
            uVar14 = uVar14 >> (uVar16 & 0x3f) | uVar16;
          } while (lVar9 != param_3 + -3 + (long)iVar17);
          iVar17 = iVar17 + -4;
          uVar16 = param_5[(ulong)*(byte *)(param_3 + iVar17) + 1];
          uVar10 = uVar16 + local_58._0_8_;
          uVar14 = uVar14 >> (uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00;
          uVar16 = uVar10 & 0xff;
          local_58._4_4_ = 0;
          local_58._0_4_ = (uint)uVar10 & 7;
          local_58._8_8_ = auVar2._8_8_;
          local_68._0_8_ = uVar14;
          *puStack_40 = uVar14 >> ((ulong)(0x40 - (int)uVar16) & 0x3f);
          puStack_40 = (ulong *)((long)puStack_40 + (uVar16 >> 3));
          if (local_38 <= puStack_40) {
            puStack_40 = local_38;
          }
        }
        if (0 < iVar17) {
          lVar19 = (long)iVar17;
          lVar9 = param_3 + -7 + lVar19;
          uVar14 = local_68._0_8_;
          uVar16 = local_58._0_8_;
          do {
            lVar8 = param_3 + lVar19;
            do {
              pbVar11 = (byte *)(lVar8 + -1);
              lVar8 = lVar8 + -1;
              uVar10 = param_5[(ulong)*pbVar11 + 1];
              uVar16 = uVar16 + uVar10;
              uVar14 = uVar14 >> (uVar10 & 0x3f) | uVar10;
            } while (lVar8 != lVar9 + 4);
            uVar10 = param_5[(ulong)*(byte *)(lVar9 + 3) + 1];
            uVar22 = uVar10 & 0xffffffffffffff00 | uVar14 >> (uVar10 & 0x3f);
            uVar14 = uVar10 + uVar16 & 0xff;
            puVar3 = (ulong *)((uVar14 >> 3) + (long)puStack_40);
            *puStack_40 = uVar22 >> ((ulong)(uint)-(int)uVar14 & 0x3f);
            if (local_38 <= puVar3) {
              puVar3 = local_38;
            }
            uVar14 = 0;
            lVar4 = 0;
            lVar8 = lVar9 + 3;
            do {
              lVar7 = lVar8;
              uVar13 = param_5[(ulong)*(byte *)(lVar7 + -1) + 1];
              lVar4 = lVar4 + uVar13;
              uVar14 = uVar14 >> (uVar13 & 0x3f) | uVar13;
              lVar8 = lVar7 + -1;
            } while (lVar7 + -1 != lVar9);
            uVar13 = param_5[(ulong)*(byte *)(lVar7 + -2) + 1];
            uVar16 = (ulong)((uint)(uVar10 + uVar16) & 7) + lVar4 + uVar13;
            uVar10 = uVar16 & 0xff;
            uVar14 = uVar14 >> (uVar13 & 0x3f) | uVar13 & 0xffffffffffffff00 |
                     uVar22 >> (lVar4 + uVar13 & 0x3f);
            lVar9 = lVar7 + -9;
            uVar16 = CONCAT44(0,(uint)uVar16 & 7);
            *puVar3 = uVar14 >> ((ulong)(uint)-(int)uVar10 & 0x3f);
            puStack_40 = (ulong *)((long)puVar3 + (uVar10 >> 3));
            if (local_38 <= puStack_40) {
              puStack_40 = local_38;
            }
            lVar19 = lVar19 + -8;
          } while (0 < (int)lVar19);
          local_68._0_8_ = uVar14;
          local_58._0_8_ = uVar16;
        }
      }
      else {
        switch((int)uVar14 - 7U & 0xff) {
        case 0:
          iVar21 = iVar17 % 8;
          if (0 < iVar21) {
            uVar14 = 0;
            lVar9 = iVar17 + param_3 + -1;
            local_68._0_8_ = 0;
            lVar19 = lVar9;
            lVar8 = iVar17 + param_3;
            while( true ) {
              lVar4 = lVar19;
              uVar16 = param_5[(ulong)*(byte *)(lVar8 + -1) + 1];
              uVar14 = uVar14 + uVar16;
              local_68._0_8_ =
                   (ulong)local_68._0_8_ >> (uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00;
              if (lVar4 == lVar9 - (ulong)(iVar21 - 1)) break;
              lVar19 = lVar4 + -1;
              lVar8 = lVar4;
            }
            local_68._8_8_ = 0;
            uVar16 = (ulong)(uint)(iVar17 - iVar21);
            local_58 = ZEXT416((uint)uVar14 & 7);
            *param_1 = (ulong)local_68._0_8_ >> ((ulong)(0x40 - (int)(uVar14 & 0xff)) & 0x3f);
            puStack_40 = (ulong *)(((uVar14 & 0xff) >> 3) + (long)param_1);
          }
          auVar2 = local_58;
          iVar17 = (int)uVar16;
          if ((uVar16 & 0xf) != 0) {
            lVar9 = param_3 + iVar17;
            uVar14 = local_68._0_8_;
            do {
              pbVar11 = (byte *)(lVar9 + -1);
              lVar9 = lVar9 + -1;
              uVar16 = param_5[(ulong)*pbVar11 + 1];
              local_58._0_8_ = local_58._0_8_ + uVar16;
              uVar14 = uVar14 >> (uVar16 & 0x3f) | uVar16;
            } while (lVar9 != param_3 + -7 + (long)iVar17);
            iVar17 = iVar17 + -8;
            uVar16 = param_5[(ulong)*(byte *)(param_3 + iVar17) + 1];
            uVar22 = local_58._0_8_ + uVar16;
            uVar10 = uVar22 & 0xff;
            local_58._4_4_ = 0;
            local_58._0_4_ = (uint)uVar22 & 7;
            uVar14 = uVar14 >> (uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00;
            local_58._8_8_ = auVar2._8_8_;
            local_68._0_8_ = uVar14;
            *puStack_40 = uVar14 >> ((ulong)(0x40 - (int)uVar10) & 0x3f);
            puStack_40 = (ulong *)((long)puStack_40 + (uVar10 >> 3));
          }
          if (0 < iVar17) {
            lVar9 = (long)iVar17;
            lVar19 = param_3 + -7 + lVar9;
            pbVar11 = (byte *)(param_3 + lVar9 + -0x10);
            uVar14 = local_68._0_8_;
            uVar16 = local_58._0_8_;
            lVar8 = lVar9 + -0x10;
            while( true ) {
              lVar9 = param_3 + lVar9;
              do {
                pbVar20 = (byte *)(lVar9 + -1);
                lVar9 = lVar9 + -1;
                uVar10 = param_5[(ulong)*pbVar20 + 1];
                uVar16 = uVar16 + uVar10;
                uVar14 = uVar14 >> (uVar10 & 0x3f) | uVar10;
              } while (lVar9 != lVar19);
              lVar9 = 0;
              uVar10 = param_5[(ulong)pbVar11[8] + 1];
              uVar22 = uVar16 + uVar10 & 0xff;
              uVar14 = uVar14 >> (uVar10 & 0x3f) | uVar10 & 0xffffffffffffff00;
              puVar3 = (ulong *)((uVar22 >> 3) + (long)puStack_40);
              *puStack_40 = uVar14 >> ((ulong)(uint)-(int)uVar22 & 0x3f);
              uVar22 = 0;
              pbVar20 = pbVar11 + 7;
              do {
                pbVar12 = pbVar20;
                pbVar20 = pbVar12 + -1;
                uVar13 = param_5[(ulong)*pbVar12 + 1];
                lVar9 = lVar9 + uVar13;
                uVar22 = uVar22 >> (uVar13 & 0x3f) | uVar13;
              } while (pbVar20 != pbVar11);
              lVar19 = lVar19 + -0x10;
              uVar13 = param_5[(ulong)*pbVar20 + 1];
              uVar16 = (ulong)((uint)(uVar16 + uVar10) & 7) + lVar9 + uVar13;
              pbVar11 = pbVar12 + -0x11;
              uVar10 = uVar16 & 0xff;
              uVar14 = uVar14 >> (lVar9 + uVar13 & 0x3f) |
                       uVar22 >> (uVar13 & 0x3f) | uVar13 & 0xffffffffffffff00;
              uVar16 = CONCAT44(0,(uint)uVar16 & 7);
              puStack_40 = (ulong *)((uVar10 >> 3) + (long)puVar3);
              *puVar3 = uVar14 >> ((ulong)(uint)-(int)uVar10 & 0x3f);
              if ((int)lVar8 < 1) break;
              lVar9 = lVar8;
              lVar8 = lVar8 + -0x10;
            }
            local_68._0_8_ = uVar14;
            local_58._0_8_ = uVar16;
          }
          break;
        case 1:
          iVar21 = iVar17 % 7;
          if (0 < iVar21) {
            uVar14 = 0;
            lVar9 = iVar17 + param_3 + -1;
            local_68._0_8_ = 0;
            lVar19 = lVar9;
            lVar8 = iVar17 + param_3;
            while( true ) {
              lVar4 = lVar19;
              uVar16 = param_5[(ulong)*(byte *)(lVar8 + -1) + 1];
              uVar14 = uVar14 + uVar16;
              local_68._0_8_ =
                   (ulong)local_68._0_8_ >> (uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00;
              if (lVar4 == lVar9 - (ulong)(iVar21 - 1)) break;
              lVar19 = lVar4 + -1;
              lVar8 = lVar4;
            }
            local_68._8_8_ = 0;
            uVar16 = (ulong)(uint)(iVar17 - iVar21);
            local_58 = ZEXT416((uint)uVar14 & 7);
            *param_1 = (ulong)local_68._0_8_ >> ((ulong)(0x40 - (int)(uVar14 & 0xff)) & 0x3f);
            puStack_40 = (ulong *)(((uVar14 & 0xff) >> 3) + (long)param_1);
          }
          auVar2 = local_58;
          iVar17 = (int)uVar16;
          if (0x12492492 < (iVar17 * -0x49249249 + 0x12492492U >> 1 | iVar17 * -0x80000000)) {
            lVar9 = param_3 + iVar17;
            uVar14 = local_68._0_8_;
            do {
              pbVar11 = (byte *)(lVar9 + -1);
              lVar9 = lVar9 + -1;
              uVar16 = param_5[(ulong)*pbVar11 + 1];
              local_58._0_8_ = local_58._0_8_ + uVar16;
              uVar14 = uVar14 >> (uVar16 & 0x3f) | uVar16;
            } while (lVar9 != param_3 + -6 + (long)iVar17);
            uVar16 = (ulong)(iVar17 - 7U);
            uVar10 = param_5[(ulong)*(byte *)(param_3 + (int)(iVar17 - 7U)) + 1];
            uVar13 = local_58._0_8_ + uVar10;
            uVar22 = uVar13 & 0xff;
            local_58._4_4_ = 0;
            local_58._0_4_ = (uint)uVar13 & 7;
            uVar14 = uVar14 >> (uVar10 & 0x3f) | uVar10 & 0xffffffffffffff00;
            local_58._8_8_ = auVar2._8_8_;
            local_68._0_8_ = uVar14;
            *puStack_40 = uVar14 >> ((ulong)(0x40 - (int)uVar22) & 0x3f);
            puStack_40 = (ulong *)((long)puStack_40 + (uVar22 >> 3));
          }
          iVar17 = (int)uVar16;
          if (0 < iVar17) {
            lVar9 = param_3 + -0xd + (long)iVar17;
            lVar19 = param_3 + -6 + (long)iVar17;
            do {
              lVar8 = lVar9 + 0xd;
              do {
                pbVar11 = (byte *)(lVar8 + -1);
                lVar8 = lVar8 + -1;
                uVar14 = param_5[(ulong)*pbVar11 + 1];
                local_58._0_8_ = local_58._0_8_ + uVar14;
                local_68._0_8_ = (ulong)local_68._0_8_ >> (uVar14 & 0x3f) | uVar14;
              } while (lVar8 != lVar19);
              uVar14 = param_5[(ulong)*(byte *)(lVar9 + 6) + 1];
              lVar4 = 0;
              uVar10 = uVar14 + local_58._0_8_ & 0xff;
              uVar22 = uVar14 & 0xffffffffffffff00 | (ulong)local_68._0_8_ >> (uVar14 & 0x3f);
              puVar3 = (ulong *)((uVar10 >> 3) + (long)puStack_40);
              *puStack_40 = uVar22 >> ((ulong)(uint)-(int)uVar10 & 0x3f);
              uVar10 = 0;
              lVar8 = lVar9 + 6;
              do {
                lVar7 = lVar8;
                uVar13 = param_5[(ulong)*(byte *)(lVar7 + -1) + 1];
                lVar4 = lVar4 + uVar13;
                uVar10 = uVar10 >> (uVar13 & 0x3f) | uVar13;
                lVar8 = lVar7 + -1;
              } while (lVar7 + -1 != lVar9);
              uVar18 = (int)uVar16 - 0xe;
              uVar16 = (ulong)uVar18;
              lVar9 = lVar7 + -0xf;
              lVar19 = lVar19 + -0xe;
              uVar13 = param_5[(ulong)*(byte *)(lVar7 + -2) + 1];
              uVar14 = lVar4 + uVar13 + (ulong)((uint)(uVar14 + local_58._0_8_) & 7);
              uVar15 = uVar14 & 0xff;
              local_68._0_8_ =
                   uVar10 >> (uVar13 & 0x3f) | uVar13 & 0xffffffffffffff00 |
                   uVar22 >> (lVar4 + uVar13 & 0x3f);
              local_58._0_8_ = ZEXT48((uint)uVar14 & 7);
              puStack_40 = (ulong *)((uVar15 >> 3) + (long)puVar3);
              *puVar3 = (ulong)local_68._0_8_ >> ((ulong)(uint)-(int)uVar15 & 0x3f);
            } while (0 < (int)uVar18);
LAB_0010099e:
          }
          break;
        case 2:
          iVar21 = iVar17 % 6;
          if (0 < iVar21) {
            pbVar11 = (byte *)(param_3 + -1 + (long)iVar17);
            uVar14 = 0;
            local_68._0_8_ = 0;
            do {
              bVar1 = *pbVar11;
              pbVar11 = pbVar11 + -1;
              uVar16 = param_5[(ulong)bVar1 + 1];
              uVar14 = uVar14 + uVar16;
              local_68._0_8_ =
                   (ulong)local_68._0_8_ >> (uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00;
            } while (pbVar11 != (byte *)((param_3 + -2 + (long)iVar17) - (ulong)(iVar21 - 1)));
            local_68._8_8_ = 0;
            uVar16 = (ulong)(uint)(iVar17 - iVar21);
            *param_1 = (ulong)local_68._0_8_ >> ((ulong)(0x40 - (int)(uVar14 & 0xff)) & 0x3f);
            local_58 = ZEXT416((uint)uVar14 & 7);
            puStack_40 = (ulong *)(((uVar14 & 0xff) >> 3) + (long)param_1);
          }
          auVar2 = local_58;
          iVar17 = (int)uVar16;
          if (0x15555554 < (iVar17 * -0x55555555 + 0x2aaaaaa8U >> 2 | iVar17 * -0x40000000)) {
            pbVar11 = (byte *)(param_3 + -1 + (long)iVar17);
            uVar14 = local_68._0_8_;
            do {
              bVar1 = *pbVar11;
              pbVar11 = pbVar11 + -1;
              uVar16 = param_5[(ulong)bVar1 + 1];
              local_58._0_8_ = local_58._0_8_ + uVar16;
              uVar14 = uVar14 >> (uVar16 & 0x3f) | uVar16;
            } while (pbVar11 != (byte *)(param_3 + -6 + (long)iVar17));
            uVar16 = (ulong)(iVar17 - 6U);
            uVar10 = param_5[(ulong)*(byte *)(param_3 + (int)(iVar17 - 6U)) + 1];
            uVar13 = local_58._0_8_ + uVar10;
            uVar22 = uVar13 & 0xff;
            local_58._4_4_ = 0;
            local_58._0_4_ = (uint)uVar13 & 7;
            uVar14 = uVar14 >> (uVar10 & 0x3f) | uVar10 & 0xffffffffffffff00;
            local_58._8_8_ = auVar2._8_8_;
            local_68._0_8_ = uVar14;
            *puStack_40 = uVar14 >> ((ulong)(0x40 - (int)uVar22) & 0x3f);
            puStack_40 = (ulong *)((long)puStack_40 + (uVar22 >> 3));
          }
          iVar17 = (int)uVar16;
          if (0 < iVar17) {
            pbVar20 = (byte *)(param_3 + -6 + (long)iVar17);
            pbVar11 = (byte *)(param_3 + -0xb + (long)iVar17);
            do {
              pbVar12 = pbVar20 + 5;
              do {
                bVar1 = *pbVar12;
                pbVar12 = pbVar12 + -1;
                uVar14 = param_5[(ulong)bVar1 + 1];
                local_58._0_8_ = local_58._0_8_ + uVar14;
                local_68._0_8_ = (ulong)local_68._0_8_ >> (uVar14 & 0x3f) | uVar14;
              } while (pbVar12 != pbVar20);
              uVar14 = param_5[(ulong)*pbVar20 + 1];
              lVar9 = 0;
              uVar10 = uVar14 + local_58._0_8_ & 0xff;
              uVar22 = uVar14 & 0xffffffffffffff00 | (ulong)local_68._0_8_ >> (uVar14 & 0x3f);
              puVar3 = (ulong *)((uVar10 >> 3) + (long)puStack_40);
              *puStack_40 = uVar22 >> ((ulong)(uint)-(int)uVar10 & 0x3f);
              uVar10 = 0;
              pbVar12 = pbVar20;
              do {
                pbVar6 = pbVar12;
                uVar13 = param_5[(ulong)pbVar6[-1] + 1];
                lVar9 = lVar9 + uVar13;
                uVar10 = uVar10 >> (uVar13 & 0x3f) | uVar13;
                pbVar12 = pbVar6 + -1;
              } while (pbVar6 + -1 != pbVar11);
              pbVar12 = pbVar20 + -6;
              uVar18 = (int)uVar16 - 0xc;
              uVar16 = (ulong)uVar18;
              pbVar20 = pbVar20 + -0xc;
              pbVar11 = pbVar6 + -0xd;
              uVar13 = param_5[(ulong)*pbVar12 + 1];
              uVar14 = lVar9 + uVar13 + (ulong)((uint)(uVar14 + local_58._0_8_) & 7);
              uVar15 = uVar14 & 0xff;
              local_68._0_8_ =
                   uVar10 >> (uVar13 & 0x3f) | uVar13 & 0xffffffffffffff00 |
                   uVar22 >> (lVar9 + uVar13 & 0x3f);
              local_58._0_8_ = ZEXT48((uint)uVar14 & 7);
              puStack_40 = (ulong *)((uVar15 >> 3) + (long)puVar3);
              *puVar3 = (ulong)local_68._0_8_ >> ((ulong)(uint)-(int)uVar15 & 0x3f);
            } while (0 < (int)uVar18);
            goto LAB_0010099e;
          }
          break;
        case 3:
          iVar21 = iVar17 % 5;
          if (0 < iVar21) {
            uVar14 = 0;
            lVar9 = iVar17 + param_3 + -1;
            local_68._0_8_ = 0;
            lVar19 = lVar9;
            lVar8 = iVar17 + param_3;
            while( true ) {
              lVar4 = lVar19;
              uVar16 = param_5[(ulong)*(byte *)(lVar8 + -1) + 1];
              uVar14 = uVar14 + uVar16;
              local_68._0_8_ =
                   (ulong)local_68._0_8_ >> (uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00;
              if (lVar9 - (ulong)(iVar21 - 1) == lVar4) break;
              lVar19 = lVar4 + -1;
              lVar8 = lVar4;
            }
            local_68._8_8_ = 0;
            uVar16 = (ulong)(uint)(iVar17 - iVar21);
            local_58 = ZEXT416((uint)uVar14 & 7);
            *param_1 = (ulong)local_68._0_8_ >> ((ulong)(0x40 - (int)(uVar14 & 0xff)) & 0x3f);
            puStack_40 = (ulong *)(((uVar14 & 0xff) >> 3) + (long)param_1);
          }
          auVar2 = local_58;
          iVar17 = (int)uVar16;
          if (0x19999998 < (iVar17 * -0x33333333 + 0x19999998U >> 1 | iVar17 * -0x80000000)) {
            lVar9 = param_3 + iVar17;
            uVar14 = local_68._0_8_;
            do {
              pbVar11 = (byte *)(lVar9 + -1);
              lVar9 = lVar9 + -1;
              uVar16 = param_5[(ulong)*pbVar11 + 1];
              local_58._0_8_ = local_58._0_8_ + uVar16;
              uVar14 = uVar14 >> (uVar16 & 0x3f) | uVar16;
            } while (lVar9 != param_3 + -4 + (long)iVar17);
            uVar16 = (ulong)(iVar17 - 5U);
            uVar10 = param_5[(ulong)*(byte *)(param_3 + (int)(iVar17 - 5U)) + 1];
            uVar22 = local_58._0_8_ + uVar10;
            uVar10 = uVar14 >> (uVar10 & 0x3f) | uVar10;
            uVar14 = uVar22 & 0xff;
            local_58._4_4_ = 0;
            local_58._0_4_ = (uint)uVar22 & 7;
            local_68._0_8_ = uVar10;
            local_58._8_8_ = auVar2._8_8_;
            *puStack_40 = uVar10 >> ((ulong)(0x40 - (int)uVar14) & 0x3f);
            puStack_40 = (ulong *)((long)puStack_40 + (uVar14 >> 3));
          }
          iVar17 = (int)uVar16;
          if (0 < iVar17) {
            lVar9 = param_3 + -9 + (long)iVar17;
            lVar19 = param_3 + -4 + (long)iVar17;
            uVar14 = local_68._0_8_;
            uVar10 = local_58._0_8_;
            do {
              lVar8 = lVar9 + 9;
              do {
                pbVar11 = (byte *)(lVar8 + -1);
                lVar8 = lVar8 + -1;
                uVar22 = param_5[(ulong)*pbVar11 + 1];
                uVar10 = uVar10 + uVar22;
                uVar14 = uVar14 >> (uVar22 & 0x3f) | uVar22;
              } while (lVar8 != lVar19);
              lVar4 = 0;
              uVar22 = param_5[(ulong)*(byte *)(lVar9 + 4) + 1];
              uVar14 = uVar14 >> (uVar22 & 0x3f) | uVar22;
              uVar13 = uVar22 + uVar10 & 0xff;
              puVar3 = (ulong *)((uVar13 >> 3) + (long)puStack_40);
              *puStack_40 = uVar14 >> ((ulong)(uint)-(int)uVar13 & 0x3f);
              uVar13 = 0;
              lVar8 = lVar9 + 4;
              do {
                lVar7 = lVar8;
                uVar15 = param_5[(ulong)*(byte *)(lVar7 + -1) + 1];
                lVar4 = lVar4 + uVar15;
                uVar13 = uVar13 >> (uVar15 & 0x3f) | uVar15;
                lVar8 = lVar7 + -1;
              } while (lVar7 + -1 != lVar9);
              uVar18 = (int)uVar16 - 10;
              uVar16 = (ulong)uVar18;
              lVar19 = lVar19 + -10;
              uVar15 = param_5[(ulong)*(byte *)(lVar7 + -2) + 1];
              lVar9 = lVar7 + -0xb;
              uVar10 = (ulong)((uint)(uVar22 + uVar10) & 7) + lVar4 + uVar15;
              uVar14 = uVar14 >> (lVar4 + uVar15 & 0x3f) | uVar13 >> (uVar15 & 0x3f) | uVar15;
              uVar22 = uVar10 & 0xff;
              uVar10 = CONCAT44(0,(uint)uVar10 & 7);
              puStack_40 = (ulong *)((uVar22 >> 3) + (long)puVar3);
              *puVar3 = uVar14 >> ((ulong)(uint)-(int)uVar22 & 0x3f);
            } while (0 < (int)uVar18);
            local_68._0_8_ = uVar14;
            local_58._0_8_ = uVar10;
          }
          break;
        case 4:
          iVar21 = iVar17 % 5;
          if (0 < iVar21) {
            uVar14 = 0;
            lVar9 = iVar17 + param_3 + -1;
            local_68._0_8_ = 0;
            lVar19 = lVar9;
            lVar8 = iVar17 + param_3;
            while( true ) {
              lVar4 = lVar19;
              uVar16 = param_5[(ulong)*(byte *)(lVar8 + -1) + 1];
              uVar14 = uVar14 + uVar16;
              local_68._0_8_ =
                   (ulong)local_68._0_8_ >> (uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00;
              if (lVar9 - (ulong)(iVar21 - 1) == lVar4) break;
              lVar19 = lVar4 + -1;
              lVar8 = lVar4;
            }
            local_68._8_8_ = 0;
            uVar16 = (ulong)(uint)(iVar17 - iVar21);
            *param_1 = (ulong)local_68._0_8_ >> ((ulong)(0x40 - (int)(uVar14 & 0xff)) & 0x3f);
            local_58 = ZEXT416((uint)uVar14 & 7);
            puStack_40 = (ulong *)(((uVar14 & 0xff) >> 3) + (long)param_1);
          }
          auVar2 = local_58;
          iVar17 = (int)uVar16;
          if (0x19999998 < (iVar17 * -0x33333333 + 0x19999998U >> 1 | iVar17 * -0x80000000)) {
            lVar9 = param_3 + iVar17;
            uVar14 = local_68._0_8_;
            do {
              pbVar11 = (byte *)(lVar9 + -1);
              lVar9 = lVar9 + -1;
              uVar16 = param_5[(ulong)*pbVar11 + 1];
              local_58._0_8_ = local_58._0_8_ + uVar16;
              uVar14 = uVar14 >> (uVar16 & 0x3f) | uVar16;
            } while (param_3 + -4 + (long)iVar17 != lVar9);
            uVar16 = (ulong)(iVar17 - 5U);
            uVar10 = param_5[(ulong)*(byte *)(param_3 + (int)(iVar17 - 5U)) + 1];
            uVar13 = local_58._0_8_ + uVar10;
            uVar22 = uVar13 & 0xff;
            local_58._4_4_ = 0;
            local_58._0_4_ = (uint)uVar13 & 7;
            uVar14 = uVar14 >> (uVar10 & 0x3f) | uVar10 & 0xffffffffffffff00;
            local_58._8_8_ = auVar2._8_8_;
            local_68._0_8_ = uVar14;
            *puStack_40 = uVar14 >> ((ulong)(0x40 - (int)uVar22) & 0x3f);
            puStack_40 = (ulong *)((long)puStack_40 + (uVar22 >> 3));
          }
          iVar17 = (int)uVar16;
          if (0 < iVar17) {
            lVar9 = param_3 + -9 + (long)iVar17;
            lVar19 = param_3 + -4 + (long)iVar17;
            uVar14 = local_68._0_8_;
            uVar10 = local_58._0_8_;
            do {
              lVar8 = lVar9 + 9;
              do {
                pbVar11 = (byte *)(lVar8 + -1);
                lVar8 = lVar8 + -1;
                uVar22 = param_5[(ulong)*pbVar11 + 1];
                uVar10 = uVar10 + uVar22;
                uVar14 = uVar14 >> (uVar22 & 0x3f) | uVar22;
              } while (lVar19 != lVar8);
              uVar22 = param_5[(ulong)*(byte *)(lVar9 + 4) + 1];
              uVar13 = uVar22 + uVar10 & 0xff;
              uVar15 = uVar22 & 0xffffffffffffff00 | uVar14 >> (uVar22 & 0x3f);
              lVar8 = lVar9 + 4;
              puVar3 = (ulong *)((uVar13 >> 3) + (long)puStack_40);
              *puStack_40 = uVar15 >> ((ulong)(uint)-(int)uVar13 & 0x3f);
              lVar4 = 0;
              uVar14 = 0;
              do {
                pbVar11 = (byte *)(lVar8 + -1);
                lVar8 = lVar8 + -1;
                uVar13 = param_5[(ulong)*pbVar11 + 1];
                lVar4 = lVar4 + uVar13;
                uVar14 = uVar14 >> (uVar13 & 0x3f) | uVar13;
              } while (lVar9 != lVar8);
              pbVar11 = (byte *)(lVar9 + -1);
              uVar18 = (int)uVar16 - 10;
              uVar16 = (ulong)uVar18;
              lVar9 = lVar9 + -10;
              lVar19 = lVar19 + -10;
              uVar13 = param_5[(ulong)*pbVar11 + 1];
              uVar10 = (ulong)((uint)(uVar22 + uVar10) & 7) + lVar4 + uVar13;
              uVar22 = uVar10 & 0xff;
              uVar14 = uVar14 >> (uVar13 & 0x3f) | uVar13 & 0xffffffffffffff00 |
                       uVar15 >> (lVar4 + uVar13 & 0x3f);
              uVar10 = CONCAT44(0,(uint)uVar10 & 7);
              puStack_40 = (ulong *)((uVar22 >> 3) + (long)puVar3);
              *puVar3 = uVar14 >> ((ulong)(uint)-(int)uVar22 & 0x3f);
            } while (0 < (int)uVar18);
            local_68._0_8_ = uVar14;
            local_58._0_8_ = uVar10;
          }
          break;
        default:
          iVar21 = iVar17 % 9;
          if (0 < iVar21) {
            uVar14 = 0;
            lVar9 = iVar17 + param_3 + -1;
            local_68._0_8_ = 0;
            lVar19 = lVar9;
            lVar8 = iVar17 + param_3;
            while( true ) {
              lVar4 = lVar19;
              uVar16 = param_5[(ulong)*(byte *)(lVar8 + -1) + 1];
              uVar14 = uVar14 + uVar16;
              local_68._0_8_ =
                   (ulong)local_68._0_8_ >> (uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00;
              if (lVar4 == lVar9 - (ulong)(iVar21 - 1)) break;
              lVar19 = lVar4 + -1;
              lVar8 = lVar4;
            }
            local_68._8_8_ = 0;
            uVar16 = (ulong)(uint)(iVar17 - iVar21);
            local_58 = ZEXT416((uint)uVar14 & 7);
            *param_1 = (ulong)local_68._0_8_ >> ((ulong)(0x40 - (int)(uVar14 & 0xff)) & 0x3f);
            puStack_40 = (ulong *)((long)param_1 + ((uVar14 & 0xff) >> 3));
          }
          auVar2 = local_58;
          iVar17 = (int)uVar16;
          if (0xe38e38e < (iVar17 * 0x38e38e39 + 0xe38e38eU >> 1 | iVar17 * -0x80000000)) {
            lVar9 = param_3 + iVar17;
            uVar14 = local_68._0_8_;
            do {
              pbVar11 = (byte *)(lVar9 + -1);
              lVar9 = lVar9 + -1;
              uVar16 = param_5[(ulong)*pbVar11 + 1];
              local_58._0_8_ = local_58._0_8_ + uVar16;
              uVar14 = uVar14 >> (uVar16 & 0x3f) | uVar16;
            } while (lVar9 != param_3 + -8 + (long)iVar17);
            uVar16 = (ulong)(iVar17 - 9U);
            uVar10 = param_5[(ulong)*(byte *)(param_3 + (int)(iVar17 - 9U)) + 1];
            uVar22 = local_58._0_8_ + uVar10;
            uVar10 = uVar14 >> (uVar10 & 0x3f) | uVar10;
            uVar14 = uVar22 & 0xff;
            local_58._4_4_ = 0;
            local_58._0_4_ = (uint)uVar22 & 7;
            local_68._0_8_ = uVar10;
            local_58._8_8_ = auVar2._8_8_;
            *puStack_40 = uVar10 >> ((ulong)(0x40 - (int)uVar14) & 0x3f);
            puStack_40 = (ulong *)((long)puStack_40 + (uVar14 >> 3));
          }
          iVar17 = (int)uVar16;
          if (0 < iVar17) {
            pbVar11 = (byte *)(param_3 + -0x12 + (long)iVar17);
            pbVar20 = (byte *)(param_3 + -8 + (long)iVar17);
            uVar14 = local_68._0_8_;
            uVar10 = local_58._0_8_;
            do {
              pbVar12 = pbVar11 + 0x12;
              do {
                pbVar6 = pbVar12 + -1;
                pbVar12 = pbVar12 + -1;
                uVar22 = param_5[(ulong)*pbVar6 + 1];
                uVar10 = uVar10 + uVar22;
                uVar14 = uVar14 >> (uVar22 & 0x3f) | uVar22;
              } while (pbVar12 != pbVar20);
              lVar9 = 0;
              uVar22 = param_5[(ulong)pbVar11[9] + 1];
              uVar14 = uVar14 >> (uVar22 & 0x3f) | uVar22;
              uVar15 = uVar22 + uVar10 & 0xff;
              uVar13 = 0;
              *puStack_40 = uVar14 >> ((ulong)(uint)-(int)uVar15 & 0x3f);
              puVar3 = (ulong *)((uVar15 >> 3) + (long)puStack_40);
              pbVar12 = pbVar11 + 8;
              do {
                pbVar6 = pbVar12;
                pbVar12 = pbVar6 + -1;
                uVar15 = param_5[(ulong)*pbVar6 + 1];
                lVar9 = lVar9 + uVar15;
                uVar13 = uVar13 >> (uVar15 & 0x3f) | uVar15;
              } while (pbVar12 != pbVar11);
              uVar18 = (int)uVar16 - 0x12;
              uVar16 = (ulong)uVar18;
              pbVar20 = pbVar20 + -0x12;
              uVar15 = param_5[(ulong)*pbVar12 + 1];
              uVar10 = (ulong)((uint)(uVar22 + uVar10) & 7) + lVar9 + uVar15;
              uVar14 = uVar13 >> (uVar15 & 0x3f) | uVar15 | uVar14 >> (lVar9 + uVar15 & 0x3f);
              pbVar11 = pbVar6 + -0x13;
              uVar22 = uVar10 & 0xff;
              uVar10 = CONCAT44(0,(uint)uVar10 & 7);
              puStack_40 = (ulong *)((uVar22 >> 3) + (long)puVar3);
              *puVar3 = uVar14 >> ((ulong)(uint)-(int)uVar22 & 0x3f);
            } while (0 < (int)uVar18);
            local_68._0_8_ = uVar14;
            local_58._0_8_ = uVar10;
          }
        }
      }
      uVar5 = HUF_closeCStream(local_68);
      goto LAB_0010023b;
    }
  }
  uVar5 = 0;
LAB_0010023b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



undefined8
HUF_compress1X_usingCTable_internal_default
          (ulong *param_1,ulong param_2,long param_3,ulong param_4,ulong *param_5)

{
  byte bVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  int iVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  byte *pbVar20;
  ulong uVar21;
  long lVar22;
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulong *local_48;
  ulong *puStack_40;
  ulong *local_38;
  long local_30;
  
  uVar13 = *param_5;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (7 < param_2) {
    local_38 = (ulong *)((long)param_1 + (param_2 - 8));
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_48 = param_1;
    puStack_40 = param_1;
    if (param_2 != 8) {
      iVar18 = (int)param_4;
      uVar16 = param_4 & 0xffffffff;
      if ((param_2 < ((uVar13 & 0xff) * param_4 >> 3) + 8) || (0xb < (byte)uVar13)) {
        iVar14 = iVar18 % 4;
        puStack_40 = param_1;
        if (0 < iVar14) {
          uVar13 = 0;
          lVar8 = (long)iVar18 + -1;
          local_68._0_8_ = 0;
          lVar19 = (long)iVar18;
          lVar7 = lVar8;
          while( true ) {
            uVar16 = param_5[(ulong)*(byte *)(param_3 + -1 + lVar19) + 1];
            uVar13 = uVar13 + uVar16;
            local_68._0_8_ =
                 (ulong)local_68._0_8_ >> ((byte)uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00;
            if (lVar7 == lVar8 - (ulong)(iVar14 - 1)) break;
            lVar19 = lVar7;
            lVar7 = lVar7 + -1;
          }
          local_68._8_8_ = 0;
          uVar16 = (ulong)(uint)(iVar18 - iVar14);
          local_58 = ZEXT416((uint)uVar13 & 7);
          *param_1 = (ulong)local_68._0_8_ >> (0x40U - (char)uVar13 & 0x3f);
          puStack_40 = (ulong *)((long)param_1 + ((uVar13 & 0xff) >> 3));
          if (local_38 <= puStack_40) {
            puStack_40 = local_38;
          }
        }
        auVar2 = local_58;
        iVar18 = (int)uVar16;
        if ((uVar16 & 7) != 0) {
          lVar8 = param_3 + iVar18;
          uVar13 = local_68._0_8_;
          do {
            pbVar15 = (byte *)(lVar8 + -1);
            lVar8 = lVar8 + -1;
            uVar16 = param_5[(ulong)*pbVar15 + 1];
            local_58._0_8_ = local_58._0_8_ + uVar16;
            uVar13 = uVar13 >> ((byte)uVar16 & 0x3f) | uVar16;
          } while (lVar8 != param_3 + -3 + (long)iVar18);
          iVar18 = iVar18 + -4;
          uVar16 = param_5[(ulong)*(byte *)(param_3 + iVar18) + 1];
          uVar5 = local_58._0_8_ + uVar16;
          local_58._4_4_ = 0;
          local_58._0_4_ = (uint)uVar5 & 7;
          uVar13 = uVar13 >> ((byte)uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00;
          local_68._0_8_ = uVar13;
          *puStack_40 = uVar13 >> (0x40U - (char)uVar5 & 0x3f);
          puStack_40 = (ulong *)((long)puStack_40 + ((uVar5 & 0xff) >> 3));
          local_58._8_8_ = auVar2._8_8_;
          if (local_38 <= puStack_40) {
            puStack_40 = local_38;
          }
        }
        if (0 < iVar18) {
          lVar19 = (long)iVar18;
          lVar8 = param_3 + -7 + lVar19;
          uVar13 = local_68._0_8_;
          uVar16 = local_58._0_8_;
          do {
            lVar7 = param_3 + lVar19;
            do {
              pbVar15 = (byte *)(lVar7 + -1);
              lVar7 = lVar7 + -1;
              uVar5 = param_5[(ulong)*pbVar15 + 1];
              uVar16 = uVar16 + uVar5;
              uVar13 = uVar13 >> ((byte)uVar5 & 0x3f) | uVar5;
            } while (lVar7 != lVar8 + 4);
            uVar5 = param_5[(ulong)*(byte *)(lVar8 + 3) + 1];
            uVar16 = uVar5 + uVar16;
            uVar13 = uVar5 & 0xffffffffffffff00 | uVar13 >> ((byte)uVar5 & 0x3f);
            puVar4 = (ulong *)(((uVar16 & 0xff) >> 3) + (long)puStack_40);
            *puStack_40 = uVar13 >> (-(char)uVar16 & 0x3fU);
            if (local_38 <= puVar4) {
              puVar4 = local_38;
            }
            lVar22 = 0;
            uVar5 = 0;
            lVar7 = lVar8 + 3;
            do {
              lVar10 = lVar7;
              uVar11 = param_5[(ulong)*(byte *)(lVar10 + -1) + 1];
              lVar22 = lVar22 + uVar11;
              uVar5 = uVar5 >> ((byte)uVar11 & 0x3f) | uVar11;
              lVar7 = lVar10 + -1;
            } while (lVar10 + -1 != lVar8);
            uVar11 = param_5[(ulong)*(byte *)(lVar10 + -2) + 1];
            uVar17 = (ulong)((uint)uVar16 & 7) + lVar22 + uVar11;
            uVar16 = CONCAT44(0,(uint)uVar17 & 7);
            uVar13 = uVar5 >> ((byte)uVar11 & 0x3f) | uVar11 & 0xffffffffffffff00 |
                     uVar13 >> ((byte)(lVar22 + uVar11) & 0x3f);
            *puVar4 = uVar13 >> (0x40U - (char)uVar17 & 0x3f);
            puStack_40 = (ulong *)((long)puVar4 + ((uVar17 & 0xff) >> 3));
            lVar8 = lVar10 + -9;
            if (local_38 <= puStack_40) {
              puStack_40 = local_38;
            }
            lVar19 = lVar19 + -8;
          } while (0 < (int)lVar19);
          local_68._0_8_ = uVar13;
          local_58._0_8_ = uVar16;
        }
      }
      else {
        switch((int)uVar13 - 7U & 0xff) {
        case 0:
          iVar14 = iVar18 % 8;
          if (0 < iVar14) {
            uVar13 = 0;
            lVar8 = iVar18 + param_3 + -1;
            local_68._0_8_ = 0;
            lVar19 = iVar18 + param_3;
            lVar7 = lVar8;
            while( true ) {
              uVar16 = param_5[(ulong)*(byte *)(lVar19 + -1) + 1];
              uVar13 = uVar13 + uVar16;
              local_68._0_8_ =
                   (ulong)local_68._0_8_ >> ((byte)uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00;
              if (lVar7 == lVar8 - (ulong)(iVar14 - 1)) break;
              lVar19 = lVar7;
              lVar7 = lVar7 + -1;
            }
            local_68._8_8_ = 0;
            uVar16 = (ulong)(uint)(iVar18 - iVar14);
            *param_1 = (ulong)local_68._0_8_ >> (0x40U - (char)uVar13 & 0x3f);
            local_58 = ZEXT416((uint)uVar13 & 7);
            puStack_40 = (ulong *)(((uVar13 & 0xff) >> 3) + (long)param_1);
          }
          auVar2 = local_58;
          iVar18 = (int)uVar16;
          if ((uVar16 & 0xf) != 0) {
            lVar8 = param_3 + iVar18;
            uVar13 = local_68._0_8_;
            do {
              pbVar15 = (byte *)(lVar8 + -1);
              lVar8 = lVar8 + -1;
              uVar16 = param_5[(ulong)*pbVar15 + 1];
              local_58._0_8_ = local_58._0_8_ + uVar16;
              uVar13 = uVar13 >> ((byte)uVar16 & 0x3f) | uVar16;
            } while (lVar8 != param_3 + -7 + (long)iVar18);
            iVar18 = iVar18 + -8;
            uVar16 = param_5[(ulong)*(byte *)(param_3 + iVar18) + 1];
            uVar5 = local_58._0_8_ + uVar16;
            uVar13 = uVar13 >> ((byte)uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00;
            local_58._4_4_ = 0;
            local_58._0_4_ = (uint)uVar5 & 7;
            local_58._8_8_ = auVar2._8_8_;
            local_68._0_8_ = uVar13;
            *puStack_40 = uVar13 >> (0x40U - (char)uVar5 & 0x3f);
            puStack_40 = (ulong *)((long)puStack_40 + ((uVar5 & 0xff) >> 3));
          }
          if (0 < iVar18) {
            lVar8 = (long)iVar18;
            lVar19 = param_3 + -7 + lVar8;
            pbVar15 = (byte *)(param_3 + lVar8 + -0x10);
            uVar13 = local_68._0_8_;
            lVar7 = lVar8 + -0x10;
            uVar16 = local_58._0_8_;
            while( true ) {
              lVar22 = lVar7;
              lVar8 = param_3 + lVar8;
              do {
                pbVar20 = (byte *)(lVar8 + -1);
                lVar8 = lVar8 + -1;
                uVar5 = param_5[(ulong)*pbVar20 + 1];
                uVar16 = uVar16 + uVar5;
                uVar13 = uVar13 >> ((byte)uVar5 & 0x3f) | uVar5;
              } while (lVar8 != lVar19);
              uVar5 = param_5[(ulong)pbVar15[8] + 1];
              uVar16 = uVar16 + uVar5;
              uVar11 = 0;
              uVar13 = uVar13 >> ((byte)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
              puVar4 = (ulong *)(((uVar16 & 0xff) >> 3) + (long)puStack_40);
              *puStack_40 = uVar13 >> (-(char)uVar16 & 0x3fU);
              lVar8 = 0;
              pbVar20 = pbVar15 + 7;
              do {
                pbVar12 = pbVar20;
                pbVar20 = pbVar12 + -1;
                uVar5 = param_5[(ulong)*pbVar12 + 1];
                lVar8 = lVar8 + uVar5;
                uVar11 = uVar11 >> ((byte)uVar5 & 0x3f) | uVar5;
              } while (pbVar20 != pbVar15);
              lVar19 = lVar19 + -0x10;
              uVar5 = param_5[(ulong)*pbVar20 + 1];
              uVar17 = (ulong)((uint)uVar16 & 7) + lVar8 + uVar5;
              uVar16 = CONCAT44(0,(uint)uVar17 & 7);
              uVar13 = uVar11 >> ((byte)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00 |
                       uVar13 >> ((byte)(lVar8 + uVar5) & 0x3f);
              puStack_40 = (ulong *)(((uVar17 & 0xff) >> 3) + (long)puVar4);
              *puVar4 = uVar13 >> (0x40U - (char)uVar17 & 0x3f);
              pbVar15 = pbVar12 + -0x11;
              if ((int)lVar22 < 1) break;
              lVar7 = lVar22 + -0x10;
              lVar8 = lVar22;
            }
            local_68._0_8_ = uVar13;
            local_58._0_8_ = uVar16;
          }
          break;
        case 1:
          iVar14 = iVar18 % 7;
          if (0 < iVar14) {
            uVar13 = 0;
            lVar8 = iVar18 + param_3 + -1;
            local_68._0_8_ = 0;
            lVar19 = iVar18 + param_3;
            lVar7 = lVar8;
            while( true ) {
              uVar16 = param_5[(ulong)*(byte *)(lVar19 + -1) + 1];
              uVar13 = uVar13 + uVar16;
              local_68._0_8_ =
                   (ulong)local_68._0_8_ >> ((byte)uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00;
              if (lVar7 == lVar8 - (ulong)(iVar14 - 1)) break;
              lVar19 = lVar7;
              lVar7 = lVar7 + -1;
            }
            local_68._8_8_ = 0;
            local_58 = ZEXT416((uint)uVar13 & 7);
            uVar16 = (ulong)(uint)(iVar18 - iVar14);
            *param_1 = (ulong)local_68._0_8_ >> (0x40U - (char)uVar13 & 0x3f);
            puStack_40 = (ulong *)(((uVar13 & 0xff) >> 3) + (long)param_1);
          }
          auVar2 = local_58;
          iVar18 = (int)uVar16;
          uVar3 = iVar18 * -0x49249249 + 0x12492492;
          if (0x12492492 < (uVar3 >> 1 | (uint)((uVar3 & 1) != 0) << 0x1f)) {
            lVar8 = param_3 + iVar18;
            uVar13 = local_68._0_8_;
            do {
              pbVar15 = (byte *)(lVar8 + -1);
              lVar8 = lVar8 + -1;
              uVar16 = param_5[(ulong)*pbVar15 + 1];
              local_58._0_8_ = local_58._0_8_ + uVar16;
              uVar13 = uVar13 >> ((byte)uVar16 & 0x3f) | uVar16;
            } while (lVar8 != param_3 + -6 + (long)iVar18);
            uVar16 = (ulong)(iVar18 - 7U);
            uVar5 = param_5[(ulong)*(byte *)(param_3 + (int)(iVar18 - 7U)) + 1];
            uVar11 = local_58._0_8_ + uVar5;
            uVar13 = uVar13 >> ((byte)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
            local_58._4_4_ = 0;
            local_58._0_4_ = (uint)uVar11 & 7;
            local_58._8_8_ = auVar2._8_8_;
            local_68._0_8_ = uVar13;
            *puStack_40 = uVar13 >> (0x40U - (char)uVar11 & 0x3f);
            puStack_40 = (ulong *)((long)puStack_40 + ((uVar11 & 0xff) >> 3));
          }
          iVar18 = (int)uVar16;
          if (0 < iVar18) {
            lVar8 = param_3 + -0xd + (long)iVar18;
            lVar19 = param_3 + -6 + (long)iVar18;
            do {
              lVar7 = lVar8 + 0xd;
              do {
                pbVar15 = (byte *)(lVar7 + -1);
                lVar7 = lVar7 + -1;
                uVar13 = param_5[(ulong)*pbVar15 + 1];
                local_58._0_8_ = local_58._0_8_ + uVar13;
                local_68._0_8_ = (ulong)local_68._0_8_ >> ((byte)uVar13 & 0x3f) | uVar13;
              } while (lVar7 != lVar19);
              uVar13 = param_5[(ulong)*(byte *)(lVar8 + 6) + 1];
              local_58._0_8_ = uVar13 + local_58._0_8_;
              uVar5 = uVar13 & 0xffffffffffffff00 | (ulong)local_68._0_8_ >> ((byte)uVar13 & 0x3f);
              puVar4 = (ulong *)(((local_58._0_8_ & 0xff) >> 3) + (long)puStack_40);
              *puStack_40 = uVar5 >> (-(char)local_58._0_8_ & 0x3fU);
              lVar22 = 0;
              uVar13 = 0;
              lVar7 = lVar8 + 6;
              do {
                lVar10 = lVar7;
                uVar11 = param_5[(ulong)*(byte *)(lVar10 + -1) + 1];
                lVar22 = lVar22 + uVar11;
                uVar13 = uVar13 >> ((byte)uVar11 & 0x3f) | uVar11;
                lVar7 = lVar10 + -1;
              } while (lVar10 + -1 != lVar8);
              uVar3 = (int)uVar16 - 0xe;
              uVar16 = (ulong)uVar3;
              lVar19 = lVar19 + -0xe;
              uVar11 = param_5[(ulong)*(byte *)(lVar10 + -2) + 1];
              uVar17 = (ulong)((uint)local_58._0_8_ & 7) + lVar22 + uVar11;
              local_58._0_8_ = ZEXT48((uint)uVar17 & 7);
              local_68._0_8_ =
                   uVar13 >> ((byte)uVar11 & 0x3f) | uVar11 & 0xffffffffffffff00 |
                   uVar5 >> ((byte)(lVar22 + uVar11) & 0x3f);
              puStack_40 = (ulong *)(((uVar17 & 0xff) >> 3) + (long)puVar4);
              *puVar4 = (ulong)local_68._0_8_ >> (0x40U - (char)uVar17 & 0x3f);
              lVar8 = lVar10 + -0xf;
            } while (0 < (int)uVar3);
LAB_001019fc:
          }
          break;
        case 2:
          iVar14 = iVar18 % 6;
          if (0 < iVar14) {
            pbVar15 = (byte *)(param_3 + -1 + (long)iVar18);
            uVar13 = 0;
            local_68._0_8_ = 0;
            do {
              bVar1 = *pbVar15;
              pbVar15 = pbVar15 + -1;
              uVar16 = param_5[(ulong)bVar1 + 1];
              uVar13 = uVar13 + uVar16;
              local_68._0_8_ =
                   (ulong)local_68._0_8_ >> ((byte)uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00;
            } while (pbVar15 != (byte *)((param_3 + -2 + (long)iVar18) - (ulong)(iVar14 - 1)));
            local_68._8_8_ = 0;
            uVar16 = (ulong)(uint)(iVar18 - iVar14);
            *param_1 = (ulong)local_68._0_8_ >> (0x40U - (char)uVar13 & 0x3f);
            local_58 = ZEXT416((uint)uVar13 & 7);
            puStack_40 = (ulong *)(((uVar13 & 0xff) >> 3) + (long)param_1);
          }
          auVar2 = local_58;
          iVar18 = (int)uVar16;
          if (0x15555554 < (iVar18 * -0x55555555 + 0x2aaaaaa8U >> 2 | iVar18 * -0x40000000)) {
            pbVar15 = (byte *)(param_3 + -1 + (long)iVar18);
            uVar13 = local_68._0_8_;
            do {
              bVar1 = *pbVar15;
              pbVar15 = pbVar15 + -1;
              uVar16 = param_5[(ulong)bVar1 + 1];
              local_58._0_8_ = local_58._0_8_ + uVar16;
              uVar13 = uVar13 >> ((byte)uVar16 & 0x3f) | uVar16;
            } while (pbVar15 != (byte *)(param_3 + -6 + (long)iVar18));
            uVar16 = (ulong)(iVar18 - 6U);
            uVar5 = param_5[(ulong)*(byte *)(param_3 + (int)(iVar18 - 6U)) + 1];
            uVar11 = local_58._0_8_ + uVar5;
            uVar13 = uVar13 >> ((byte)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
            local_58._4_4_ = 0;
            local_58._0_4_ = (uint)uVar11 & 7;
            local_58._8_8_ = auVar2._8_8_;
            local_68._0_8_ = uVar13;
            *puStack_40 = uVar13 >> (0x40U - (char)uVar11 & 0x3f);
            puStack_40 = (ulong *)((long)puStack_40 + ((uVar11 & 0xff) >> 3));
          }
          iVar18 = (int)uVar16;
          if (0 < iVar18) {
            pbVar20 = (byte *)(param_3 + -6 + (long)iVar18);
            pbVar15 = (byte *)(param_3 + -0xb + (long)iVar18);
            do {
              pbVar12 = pbVar20 + 5;
              do {
                bVar1 = *pbVar12;
                pbVar12 = pbVar12 + -1;
                uVar13 = param_5[(ulong)bVar1 + 1];
                local_58._0_8_ = local_58._0_8_ + uVar13;
                local_68._0_8_ = (ulong)local_68._0_8_ >> ((byte)uVar13 & 0x3f) | uVar13;
              } while (pbVar12 != pbVar20);
              uVar13 = param_5[(ulong)*pbVar20 + 1];
              local_58._0_8_ = uVar13 + local_58._0_8_;
              uVar5 = uVar13 & 0xffffffffffffff00 | (ulong)local_68._0_8_ >> ((byte)uVar13 & 0x3f);
              puVar4 = (ulong *)(((local_58._0_8_ & 0xff) >> 3) + (long)puStack_40);
              *puStack_40 = uVar5 >> (-(char)local_58._0_8_ & 0x3fU);
              lVar8 = 0;
              uVar13 = 0;
              pbVar12 = pbVar20;
              do {
                pbVar9 = pbVar12;
                uVar11 = param_5[(ulong)pbVar9[-1] + 1];
                lVar8 = lVar8 + uVar11;
                uVar13 = uVar13 >> ((byte)uVar11 & 0x3f) | uVar11;
                pbVar12 = pbVar9 + -1;
              } while (pbVar9 + -1 != pbVar15);
              pbVar15 = pbVar20 + -6;
              uVar3 = (int)uVar16 - 0xc;
              uVar16 = (ulong)uVar3;
              pbVar20 = pbVar20 + -0xc;
              uVar11 = param_5[(ulong)*pbVar15 + 1];
              uVar17 = (ulong)((uint)local_58._0_8_ & 7) + lVar8 + uVar11;
              local_58._0_8_ = ZEXT48((uint)uVar17 & 7);
              local_68._0_8_ =
                   uVar13 >> ((byte)uVar11 & 0x3f) | uVar11 & 0xffffffffffffff00 |
                   uVar5 >> ((byte)(lVar8 + uVar11) & 0x3f);
              puStack_40 = (ulong *)(((uVar17 & 0xff) >> 3) + (long)puVar4);
              *puVar4 = (ulong)local_68._0_8_ >> (0x40U - (char)uVar17 & 0x3f);
              pbVar15 = pbVar9 + -0xd;
            } while (0 < (int)uVar3);
            goto LAB_001019fc;
          }
          break;
        case 3:
          iVar14 = iVar18 % 5;
          if (0 < iVar14) {
            uVar13 = 0;
            lVar8 = iVar18 + param_3 + -1;
            local_68._0_8_ = 0;
            lVar19 = iVar18 + param_3;
            lVar7 = lVar8;
            while( true ) {
              uVar16 = param_5[(ulong)*(byte *)(lVar19 + -1) + 1];
              uVar13 = uVar13 + uVar16;
              local_68._0_8_ =
                   (ulong)local_68._0_8_ >> ((byte)uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00;
              if (lVar8 - (ulong)(iVar14 - 1) == lVar7) break;
              lVar19 = lVar7;
              lVar7 = lVar7 + -1;
            }
            local_68._8_8_ = 0;
            uVar16 = (ulong)(uint)(iVar18 - iVar14);
            *param_1 = (ulong)local_68._0_8_ >> (0x40U - (char)uVar13 & 0x3f);
            local_58 = ZEXT416((uint)uVar13 & 7);
            puStack_40 = (ulong *)(((uVar13 & 0xff) >> 3) + (long)param_1);
          }
          auVar2 = local_58;
          iVar18 = (int)uVar16;
          uVar3 = iVar18 * -0x33333333 + 0x19999998;
          if (0x19999998 < (uVar3 >> 1 | (uint)((uVar3 & 1) != 0) << 0x1f)) {
            lVar8 = param_3 + iVar18;
            uVar13 = local_68._0_8_;
            do {
              pbVar15 = (byte *)(lVar8 + -1);
              lVar8 = lVar8 + -1;
              uVar16 = param_5[(ulong)*pbVar15 + 1];
              local_58._0_8_ = local_58._0_8_ + uVar16;
              uVar13 = uVar13 >> ((byte)uVar16 & 0x3f) | uVar16;
            } while (lVar8 != param_3 + -4 + (long)iVar18);
            uVar16 = (ulong)(iVar18 - 5U);
            uVar5 = param_5[(ulong)*(byte *)(param_3 + (int)(iVar18 - 5U)) + 1];
            uVar11 = local_58._0_8_ + uVar5;
            uVar5 = uVar13 >> ((byte)uVar5 & 0x3f) | uVar5;
            local_58._4_4_ = 0;
            local_58._0_4_ = (uint)uVar11 & 7;
            local_58._8_8_ = auVar2._8_8_;
            local_68._0_8_ = uVar5;
            *puStack_40 = uVar5 >> (0x40U - (char)uVar11 & 0x3f);
            puStack_40 = (ulong *)((long)puStack_40 + ((uVar11 & 0xff) >> 3));
          }
          iVar18 = (int)uVar16;
          if (0 < iVar18) {
            lVar8 = param_3 + -9 + (long)iVar18;
            lVar19 = param_3 + -4 + (long)iVar18;
            do {
              lVar7 = lVar8 + 9;
              do {
                pbVar15 = (byte *)(lVar7 + -1);
                lVar7 = lVar7 + -1;
                uVar13 = param_5[(ulong)*pbVar15 + 1];
                local_58._0_8_ = local_58._0_8_ + uVar13;
                local_68._0_8_ = (ulong)local_68._0_8_ >> ((byte)uVar13 & 0x3f) | uVar13;
              } while (lVar7 != lVar19);
              uVar13 = param_5[(ulong)*(byte *)(lVar8 + 4) + 1];
              uVar11 = 0;
              uVar5 = (ulong)local_68._0_8_ >> ((byte)uVar13 & 0x3f) | uVar13;
              uVar13 = uVar13 + local_58._0_8_;
              puVar4 = (ulong *)(((uVar13 & 0xff) >> 3) + (long)puStack_40);
              *puStack_40 = uVar5 >> (-(char)uVar13 & 0x3fU);
              lVar22 = 0;
              lVar7 = lVar8 + 4;
              do {
                lVar10 = lVar7;
                uVar17 = param_5[(ulong)*(byte *)(lVar10 + -1) + 1];
                lVar22 = lVar22 + uVar17;
                uVar11 = uVar11 >> ((byte)uVar17 & 0x3f) | uVar17;
                lVar7 = lVar10 + -1;
              } while (lVar10 + -1 != lVar8);
              uVar3 = (int)uVar16 - 10;
              uVar16 = (ulong)uVar3;
              lVar19 = lVar19 + -10;
              uVar17 = param_5[(ulong)*(byte *)(lVar10 + -2) + 1];
              uVar13 = (ulong)((uint)uVar13 & 7) + lVar22 + uVar17;
              lVar8 = lVar10 + -0xb;
              local_58._0_8_ = ZEXT48((uint)uVar13 & 7);
              local_68._0_8_ =
                   uVar11 >> ((byte)uVar17 & 0x3f) | uVar17 |
                   uVar5 >> ((byte)(lVar22 + uVar17) & 0x3f);
              puStack_40 = (ulong *)(((uVar13 & 0xff) >> 3) + (long)puVar4);
              *puVar4 = (ulong)local_68._0_8_ >> (0x40U - (char)uVar13 & 0x3f);
            } while (0 < (int)uVar3);
LAB_001017d6:
          }
          break;
        case 4:
          iVar14 = iVar18 % 5;
          if (0 < iVar14) {
            uVar13 = 0;
            lVar8 = iVar18 + param_3 + -1;
            local_68._0_8_ = 0;
            lVar19 = iVar18 + param_3;
            lVar7 = lVar8;
            while( true ) {
              uVar16 = param_5[(ulong)*(byte *)(lVar19 + -1) + 1];
              uVar13 = uVar13 + uVar16;
              local_68._0_8_ =
                   (ulong)local_68._0_8_ >> ((byte)uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00;
              if (lVar8 - (ulong)(iVar14 - 1) == lVar7) break;
              lVar19 = lVar7;
              lVar7 = lVar7 + -1;
            }
            local_68._8_8_ = 0;
            uVar16 = (ulong)(uint)(iVar18 - iVar14);
            *param_1 = (ulong)local_68._0_8_ >> (0x40U - (char)uVar13 & 0x3f);
            local_58 = ZEXT416((uint)uVar13 & 7);
            puStack_40 = (ulong *)(((uVar13 & 0xff) >> 3) + (long)param_1);
          }
          auVar2 = local_58;
          iVar18 = (int)uVar16;
          uVar3 = iVar18 * -0x33333333 + 0x19999998;
          if (0x19999998 < (uVar3 >> 1 | (uint)((uVar3 & 1) != 0) << 0x1f)) {
            lVar8 = param_3 + iVar18;
            uVar13 = local_68._0_8_;
            do {
              pbVar15 = (byte *)(lVar8 + -1);
              lVar8 = lVar8 + -1;
              uVar16 = param_5[(ulong)*pbVar15 + 1];
              local_58._0_8_ = local_58._0_8_ + uVar16;
              uVar13 = uVar13 >> ((byte)uVar16 & 0x3f) | uVar16;
            } while (param_3 + -4 + (long)iVar18 != lVar8);
            uVar16 = (ulong)(iVar18 - 5U);
            uVar5 = param_5[(ulong)*(byte *)(param_3 + (int)(iVar18 - 5U)) + 1];
            uVar11 = local_58._0_8_ + uVar5;
            uVar13 = uVar13 >> ((byte)uVar5 & 0x3f) | uVar5 & 0xffffffffffffff00;
            local_58._4_4_ = 0;
            local_58._0_4_ = (uint)uVar11 & 7;
            local_58._8_8_ = auVar2._8_8_;
            local_68._0_8_ = uVar13;
            *puStack_40 = uVar13 >> (0x40U - (char)uVar11 & 0x3f);
            puStack_40 = (ulong *)((long)puStack_40 + ((uVar11 & 0xff) >> 3));
          }
          iVar18 = (int)uVar16;
          if (0 < iVar18) {
            lVar8 = param_3 + -9 + (long)iVar18;
            lVar19 = param_3 + -4 + (long)iVar18;
            uVar13 = local_68._0_8_;
            uVar5 = local_58._0_8_;
            do {
              lVar7 = lVar8 + 9;
              do {
                pbVar15 = (byte *)(lVar7 + -1);
                lVar7 = lVar7 + -1;
                uVar11 = param_5[(ulong)*pbVar15 + 1];
                uVar5 = uVar5 + uVar11;
                uVar13 = uVar13 >> ((byte)uVar11 & 0x3f) | uVar11;
              } while (lVar19 != lVar7);
              uVar11 = param_5[(ulong)*(byte *)(lVar8 + 4) + 1];
              lVar7 = lVar8 + 4;
              uVar5 = uVar11 + uVar5;
              uVar11 = uVar11 & 0xffffffffffffff00 | uVar13 >> ((byte)uVar11 & 0x3f);
              puVar4 = (ulong *)(((uVar5 & 0xff) >> 3) + (long)puStack_40);
              *puStack_40 = uVar11 >> (-(char)uVar5 & 0x3fU);
              lVar22 = 0;
              uVar13 = 0;
              do {
                pbVar15 = (byte *)(lVar7 + -1);
                lVar7 = lVar7 + -1;
                uVar17 = param_5[(ulong)*pbVar15 + 1];
                lVar22 = lVar22 + uVar17;
                uVar13 = uVar13 >> ((byte)uVar17 & 0x3f) | uVar17;
              } while (lVar8 != lVar7);
              pbVar15 = (byte *)(lVar8 + -1);
              uVar3 = (int)uVar16 - 10;
              uVar16 = (ulong)uVar3;
              lVar8 = lVar8 + -10;
              lVar19 = lVar19 + -10;
              uVar17 = param_5[(ulong)*pbVar15 + 1];
              uVar21 = (ulong)((uint)uVar5 & 7) + lVar22 + uVar17;
              uVar5 = CONCAT44(0,(uint)uVar21 & 7);
              uVar13 = uVar13 >> ((byte)uVar17 & 0x3f) | uVar17 & 0xffffffffffffff00 |
                       uVar11 >> ((byte)(lVar22 + uVar17) & 0x3f);
              puStack_40 = (ulong *)(((uVar21 & 0xff) >> 3) + (long)puVar4);
              *puVar4 = uVar13 >> (0x40U - (char)uVar21 & 0x3f);
            } while (0 < (int)uVar3);
            local_68._0_8_ = uVar13;
            local_58._0_8_ = uVar5;
          }
          break;
        default:
          iVar14 = iVar18 % 9;
          if (0 < iVar14) {
            uVar13 = 0;
            lVar8 = iVar18 + param_3 + -1;
            local_68._0_8_ = 0;
            lVar19 = iVar18 + param_3;
            lVar7 = lVar8;
            while( true ) {
              uVar16 = param_5[(ulong)*(byte *)(lVar19 + -1) + 1];
              uVar13 = uVar13 + uVar16;
              local_68._0_8_ =
                   (ulong)local_68._0_8_ >> ((byte)uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00;
              if (lVar7 == lVar8 - (ulong)(iVar14 - 1)) break;
              lVar19 = lVar7;
              lVar7 = lVar7 + -1;
            }
            local_68._8_8_ = 0;
            local_58 = ZEXT416((uint)uVar13 & 7);
            uVar16 = (ulong)(uint)(iVar18 - iVar14);
            *param_1 = (ulong)local_68._0_8_ >> (0x40U - (char)uVar13 & 0x3f);
            puStack_40 = (ulong *)((long)param_1 + ((uVar13 & 0xff) >> 3));
          }
          auVar2 = local_58;
          iVar18 = (int)uVar16;
          uVar3 = iVar18 * 0x38e38e39 + 0xe38e38e;
          if (0xe38e38e < (uVar3 >> 1 | (uint)((uVar3 & 1) != 0) << 0x1f)) {
            lVar8 = param_3 + iVar18;
            uVar13 = local_68._0_8_;
            do {
              pbVar15 = (byte *)(lVar8 + -1);
              lVar8 = lVar8 + -1;
              uVar16 = param_5[(ulong)*pbVar15 + 1];
              local_58._0_8_ = local_58._0_8_ + uVar16;
              uVar13 = uVar13 >> ((byte)uVar16 & 0x3f) | uVar16;
            } while (lVar8 != param_3 + -8 + (long)iVar18);
            uVar16 = (ulong)(iVar18 - 9U);
            uVar5 = param_5[(ulong)*(byte *)(param_3 + (int)(iVar18 - 9U)) + 1];
            uVar11 = local_58._0_8_ + uVar5;
            uVar5 = uVar13 >> ((byte)uVar5 & 0x3f) | uVar5;
            local_58._4_4_ = 0;
            local_58._0_4_ = (uint)uVar11 & 7;
            local_58._8_8_ = auVar2._8_8_;
            local_68._0_8_ = uVar5;
            *puStack_40 = uVar5 >> (0x40U - (char)uVar11 & 0x3f);
            puStack_40 = (ulong *)((long)puStack_40 + ((uVar11 & 0xff) >> 3));
          }
          iVar18 = (int)uVar16;
          if (0 < iVar18) {
            pbVar15 = (byte *)(param_3 + -0x12 + (long)iVar18);
            pbVar20 = (byte *)(param_3 + -8 + (long)iVar18);
            do {
              pbVar12 = pbVar15 + 0x12;
              do {
                pbVar9 = pbVar12 + -1;
                pbVar12 = pbVar12 + -1;
                uVar13 = param_5[(ulong)*pbVar9 + 1];
                local_58._0_8_ = local_58._0_8_ + uVar13;
                local_68._0_8_ = (ulong)local_68._0_8_ >> ((byte)uVar13 & 0x3f) | uVar13;
              } while (pbVar12 != pbVar20);
              uVar13 = param_5[(ulong)pbVar15[9] + 1];
              uVar11 = 0;
              uVar5 = (ulong)local_68._0_8_ >> ((byte)uVar13 & 0x3f) | uVar13;
              uVar13 = uVar13 + local_58._0_8_;
              puVar4 = (ulong *)(((uVar13 & 0xff) >> 3) + (long)puStack_40);
              *puStack_40 = uVar5 >> (-(char)uVar13 & 0x3fU);
              lVar8 = 0;
              pbVar12 = pbVar15 + 8;
              do {
                pbVar9 = pbVar12;
                pbVar12 = pbVar9 + -1;
                uVar17 = param_5[(ulong)*pbVar9 + 1];
                lVar8 = lVar8 + uVar17;
                uVar11 = uVar11 >> ((byte)uVar17 & 0x3f) | uVar17;
              } while (pbVar12 != pbVar15);
              uVar3 = (int)uVar16 - 0x12;
              uVar16 = (ulong)uVar3;
              pbVar15 = pbVar9 + -0x13;
              pbVar20 = pbVar20 + -0x12;
              uVar17 = param_5[(ulong)*pbVar12 + 1];
              uVar13 = (ulong)((uint)uVar13 & 7) + lVar8 + uVar17;
              local_58._0_8_ = ZEXT48((uint)uVar13 & 7);
              local_68._0_8_ =
                   uVar11 >> ((byte)uVar17 & 0x3f) | uVar17 |
                   uVar5 >> ((byte)(lVar8 + uVar17) & 0x3f);
              puStack_40 = (ulong *)(((uVar13 & 0xff) >> 3) + (long)puVar4);
              *puVar4 = (ulong)local_68._0_8_ >> (0x40U - (char)uVar13 & 0x3f);
            } while (0 < (int)uVar3);
            goto LAB_001017d6;
          }
        }
      }
      uVar6 = HUF_closeCStream(local_68);
      goto LAB_001012db;
    }
  }
  uVar6 = 0;
LAB_001012db:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



ulong HUF_compress4X_usingCTable_internal
                (undefined2 *param_1,ulong param_2,long param_3,ulong param_4,undefined8 param_5,
                uint param_6)

{
  undefined2 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_4 < 0xc) {
    return 0;
  }
  if (0x10 < param_2) {
    puVar1 = param_1 + 3;
    uVar6 = param_4 + 3 >> 2;
    param_6 = param_6 & 1;
    if (param_6 == 0) {
      uVar2 = HUF_compress1X_usingCTable_internal_default(puVar1);
    }
    else {
      uVar2 = HUF_compress1X_usingCTable_internal_bmi2(puVar1,param_2 - 6,param_3,uVar6);
    }
    if (0xffffffffffffff88 < uVar2) {
      return uVar2;
    }
    if (uVar2 - 1 < 0xffff) {
      *param_1 = (short)uVar2;
      lVar5 = (long)puVar1 + uVar2;
      lVar3 = param_3 + uVar6;
      lVar4 = (long)param_1 + (param_2 - lVar5);
      if (param_6 == 0) {
        uVar2 = HUF_compress1X_usingCTable_internal_default(lVar5,lVar4,lVar3);
      }
      else {
        uVar2 = HUF_compress1X_usingCTable_internal_bmi2(lVar5,lVar4,lVar3,uVar6,param_5);
      }
      if (0xffffffffffffff88 < uVar2) {
        return uVar2;
      }
      if (uVar2 - 1 < 0xffff) {
        lVar5 = lVar5 + uVar2;
        param_1[1] = (short)uVar2;
        lVar4 = (long)param_1 + (param_2 - lVar5);
        lVar3 = lVar3 + uVar6;
        if (param_6 == 0) {
          uVar2 = HUF_compress1X_usingCTable_internal_default(lVar5,lVar4,lVar3);
        }
        else {
          uVar2 = HUF_compress1X_usingCTable_internal_bmi2(lVar5,lVar4,lVar3,uVar6,param_5);
        }
        if (0xffffffffffffff88 < uVar2) {
          return uVar2;
        }
        if (uVar2 - 1 < 0xffff) {
          lVar5 = lVar5 + uVar2;
          param_1[2] = (short)uVar2;
          if (param_6 == 0) {
            uVar6 = HUF_compress1X_usingCTable_internal_default();
          }
          else {
            uVar6 = HUF_compress1X_usingCTable_internal_bmi2
                              (lVar5,(long)param_1 + (param_2 - lVar5),lVar3 + uVar6,
                               (param_3 + param_4) - (lVar3 + uVar6),param_5);
          }
          if (0xffffffffffffff88 < uVar6) {
            return uVar6;
          }
          if (uVar6 - 1 < 0xffff) {
            return (lVar5 + uVar6) - (long)param_1;
          }
        }
      }
    }
  }
  return 0;
}



ulong HUF_compressCTable_internal
                (long param_1,long param_2,long param_3,undefined8 param_4,long param_5,int param_6,
                undefined8 param_7,uint param_8)

{
  ulong uVar1;
  
  if (param_6 == 0) {
    if ((param_8 & 1) == 0) {
      uVar1 = HUF_compress1X_usingCTable_internal_default();
    }
    else {
      uVar1 = HUF_compress1X_usingCTable_internal_bmi2
                        (param_2,param_3 - param_2,param_4,param_5,param_7);
    }
  }
  else {
    uVar1 = HUF_compress4X_usingCTable_internal
                      (param_2,param_3 - param_2,param_4,param_5,param_7,param_8);
  }
  if ((uVar1 < 0xffffffffffffff89) && (uVar1 != 0)) {
    uVar1 = (uVar1 + param_2) - param_1;
    if (param_5 - 1U <= uVar1) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



undefined8 HUF_readCTableHeader(undefined8 *param_1)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return *param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * HUF_writeCTable_wksp
                 (char *param_1,char *param_2,long param_3,uint param_4,int param_5,long param_6,
                 ulong param_7)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (ulong)(-(int)param_6 & 3);
  if ((param_7 < uVar7) || (param_7 - uVar7 < 0x2ec)) goto LAB_001027d0;
  pcVar5 = (char *)0xffffffffffffffd2;
  if (0xff < param_4) goto LAB_00102790;
  param_6 = param_6 + uVar7;
  *(undefined1 *)(param_6 + 0x1e0) = 0;
  if (1 < param_5 + 1U) {
    pcVar5 = (char *)(param_6 + 0x1e1);
    do {
      pcVar4 = pcVar5 + 1;
      *pcVar5 = ((char)param_5 + (char)(char *)(param_6 + 0x1e1)) - (char)pcVar5;
      pcVar5 = pcVar4;
    } while (pcVar4 != (char *)(param_6 + 0x1e2 + (ulong)(param_5 - 1)));
  }
  uVar8 = (ulong)param_4;
  uVar7 = 1;
  if (param_4 == 0) {
    if (param_2 != (char *)0x0) {
      pcVar5 = (char *)0x1;
      if ((-param_6 & 3U) == 0) {
LAB_00102861:
        *param_1 = (char)param_4 + '\x7f';
        *(undefined1 *)(param_6 + 0x1ed + uVar8) = 0;
        if (param_4 == 0) goto LAB_00102790;
LAB_0010280f:
        uVar7 = 0;
        do {
          uVar8 = uVar7 >> 1;
          pcVar4 = (char *)(param_6 + 0x1ed + uVar7);
          pcVar6 = (char *)(param_6 + 0x1ee + uVar7);
          uVar7 = uVar7 + 2;
          param_1[((uint)uVar8 & 0x7fffffff) + 1] = *pcVar4 * '\x10' + *pcVar6;
        } while ((uint)uVar7 < param_4);
        goto LAB_00102790;
      }
      goto LAB_001027d0;
    }
  }
  else {
    do {
      *(undefined1 *)(param_6 + 0x1ec + uVar7) =
           *(undefined1 *)(param_6 + 0x1e0 + (ulong)*(byte *)(param_3 + uVar7 * 8));
      bVar9 = uVar8 != uVar7;
      uVar7 = uVar7 + 1;
    } while (bVar9);
    if (param_2 != (char *)0x0) {
      local_44 = 0xc;
      if ((-param_6 & 3U) != 0) {
LAB_001027d0:
        pcVar5 = (char *)0xffffffffffffffff;
        goto LAB_00102790;
      }
      if (uVar8 == 1) {
        pcVar5 = (char *)0x2;
        if (param_2 != (char *)0x1) goto LAB_00102861;
      }
      else {
        uVar2 = HIST_count_simple(param_6 + 400,&local_44,param_6 + 0x1ed,uVar8);
        if ((param_4 != uVar2) && (uVar2 != 1)) {
          uVar3 = FSE_optimalTableLog(6,uVar8,local_44);
          lVar1 = param_6 + 0x1c4;
          pcVar5 = (char *)FSE_normalizeCount(lVar1,uVar3,param_6 + 400,uVar8,local_44,0);
          if ((char *)0xffffffffffffff88 < pcVar5) goto LAB_00102790;
          pcVar4 = param_1 + 1;
          pcVar6 = (char *)FSE_writeNCount(pcVar4,param_2 + -1,lVar1,local_44,uVar3);
          pcVar5 = pcVar6;
          if (((char *)0xffffffffffffff88 < pcVar6) ||
             (pcVar5 = (char *)FSE_buildCTable_wksp
                                         (param_6,lVar1,local_44,uVar3,param_6 + 0xec,0xa4),
             (char *)0xffffffffffffff88 < pcVar5)) goto LAB_00102790;
          pcVar5 = (char *)FSE_compress_usingCTable
                                     (pcVar4 + (long)pcVar6,(long)(param_2 + -1) - (long)pcVar6,
                                      param_6 + 0x1ed,uVar8,param_6);
          if ((char *)0xffffffffffffff88 < pcVar5) goto LAB_00102790;
          if (pcVar5 != (char *)0x0) {
            pcVar5 = pcVar4 + (long)pcVar6 + ((long)pcVar5 - (long)pcVar4);
            if ((char *)0xffffffffffffff88 < pcVar5) goto LAB_00102790;
            if ((pcVar5 < (char *)(ulong)(param_4 >> 1)) && ((char *)0x1 < pcVar5)) {
              *param_1 = (char)pcVar5;
              pcVar5 = pcVar5 + 1;
              goto LAB_00102790;
            }
          }
        }
        if (0x80 < param_4) goto LAB_001027d0;
        pcVar5 = (char *)(ulong)((param_4 + 1 >> 1) + 1);
        if (pcVar5 <= param_2) {
          *param_1 = (char)param_4 + '\x7f';
          *(undefined1 *)(param_6 + 0x1ed + uVar8) = 0;
          goto LAB_0010280f;
        }
      }
    }
  }
  pcVar5 = (char *)0xffffffffffffffba;
LAB_00102790:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar5;
}



ulong HUF_readCTable(ulong *param_1,int *param_2,undefined8 param_3,ulong param_4,uint *param_5)

{
  ulong *puVar1;
  int iVar2;
  ushort uVar3;
  ulong uVar4;
  ulong *puVar5;
  byte bVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  long in_FS_OFFSET;
  uint local_1c0;
  uint local_1bc;
  undefined1 local_1b8 [12];
  undefined4 uStack_1ac;
  undefined1 auStack_1a8 [12];
  undefined1 local_198;
  undefined1 uStack_197;
  undefined4 uStack_196;
  undefined2 uStack_192;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 auStack_188 [12];
  int local_178;
  int local_174 [15];
  byte local_138 [264];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c0 = 0;
  local_1bc = 0;
  uVar4 = HUF_readStats(local_138,0x100,&local_178,&local_1bc,&local_1c0);
  if (0xffffffffffffff88 < uVar4) goto LAB_00102ae2;
  param_4 = (ulong)local_1c0;
  *param_5 = (uint)(local_178 != 0);
  if (0xc < local_1c0) {
    uVar4 = 0xffffffffffffffd4;
    goto LAB_00102ae2;
  }
  if (*param_2 + 1U < local_1bc) {
    uVar4 = 0xffffffffffffffd0;
    goto LAB_00102ae2;
  }
  uStack_196 = 0;
  uVar7 = 0;
  *param_2 = local_1bc - 1;
  iVar9 = 0;
  uStack_192 = 0;
  local_198 = (char)local_1c0;
  uStack_197 = (undefined1)(local_1bc - 1);
  *param_1 = (ulong)CONCAT11(uStack_197,(char)local_1c0);
  if (local_1c0 == 0) {
    if (local_1bc == 0) goto LAB_00102ae2;
LAB_00102a14:
    uVar7 = 0;
    do {
      bVar6 = local_138[uVar7];
      uVar8 = (local_1c0 + 1) - (uint)bVar6 & 0xff;
      if (bVar6 == 0) {
        uVar8 = 0;
      }
      param_1[uVar7 + 1] = (ulong)uVar8;
      uVar7 = uVar7 + 1;
    } while (local_1bc != uVar7);
    local_1b8 = SUB1612((undefined1  [16])0x0,0);
    local_198 = 0;
    uStack_197 = 0;
    uStack_196 = 0;
    uStack_192 = 0;
    uStack_190 = 0;
    uStack_1ac = 0;
    auStack_1a8 = SUB1612((undefined1  [16])0x0,4);
    uStack_18c = 0;
    auStack_188 = SUB1612((undefined1  [16])0x0,4);
    puVar5 = param_1;
    do {
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + 1;
      *(short *)(local_1b8 + (ulong)(byte)*puVar1 * 2) =
           *(short *)(local_1b8 + (ulong)(byte)*puVar1 * 2) + 1;
    } while (puVar5 != param_1 + local_1bc);
    if (local_1c0 != 0) goto LAB_00102a79;
  }
  else {
    do {
      iVar2 = local_174[uVar7];
      local_174[uVar7] = iVar9;
      bVar6 = (byte)uVar7;
      uVar7 = uVar7 + 1;
      iVar9 = iVar9 + (iVar2 << (bVar6 & 0x1f));
    } while (param_4 != uVar7);
    if (local_1bc != 0) goto LAB_00102a14;
    local_1b8 = SUB1612((undefined1  [16])0x0,0);
    local_198 = 0;
    uStack_197 = 0;
    uStack_196 = 0;
    uStack_192 = 0;
    uStack_190 = 0;
    uStack_1ac = 0;
    auStack_1a8 = SUB1612((undefined1  [16])0x0,4);
    uStack_18c = 0;
    auStack_188 = SUB1612((undefined1  [16])0x0,4);
LAB_00102a79:
    uVar3 = 0;
    do {
      *(ushort *)(&local_198 + param_4 * 2) = uVar3;
      uVar3 = (ushort)(uVar3 + *(short *)(local_1b8 + param_4 * 2)) >> 1;
      uVar8 = (int)param_4 - 1;
      param_4 = (ulong)uVar8;
    } while (uVar8 != 0);
    if (local_1bc == 0) goto LAB_00102ae2;
  }
  puVar5 = param_1 + local_1bc;
  do {
    uVar7 = param_1[1];
    param_4 = uVar7 & 0xff;
    uVar3 = *(ushort *)(&local_198 + param_4 * 2);
    *(ushort *)(&local_198 + param_4 * 2) = uVar3 + 1;
    if (param_4 != 0) {
      param_1[1] = (ulong)uVar3 << (-(char)uVar7 & 0x3fU) | uVar7;
    }
    param_1 = param_1 + 1;
  } while (param_1 != puVar5);
LAB_00102ae2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_4);
  }
  return uVar4;
}



undefined1 HUF_getNbBitsFromCTable(long param_1,uint param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_2 <= *(byte *)(param_1 + 1)) {
    uVar1 = *(undefined1 *)(param_1 + 8 + (ulong)param_2 * 8);
  }
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong HUF_buildCTable_wksp
                (ulong *param_1,uint *param_2,uint param_3,uint param_4,long param_5,ulong param_6)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  char *pcVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  short *psVar15;
  short *psVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  undefined8 *puVar20;
  ushort *puVar21;
  ushort *puVar22;
  byte *pbVar23;
  byte bVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int *piVar28;
  uint *puVar29;
  ulong uVar30;
  ushort uVar31;
  int iVar32;
  long lVar33;
  ulong *puVar34;
  undefined8 *puVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  long in_FS_OFFSET;
  bool bVar39;
  undefined1 in_XMM0 [16];
  undefined1 local_d4;
  unkbyte10 Stack_98;
  undefined6 uStack_8e;
  unkbyte10 Stack_88;
  uint auStack_78 [2];
  undefined2 uStack_70;
  undefined6 uStack_6e;
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_40;
  
  uVar14 = (ulong)(-(int)param_5 & 3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar13 = 0xffffffffffffffbe;
  if ((param_6 < uVar14) || (param_6 - uVar14 < 0x1300)) goto LAB_001032f2;
  if (param_4 == 0) {
    param_4 = 0xb;
  }
  uVar13 = 0xffffffffffffffd2;
  if (0xff < param_3) goto LAB_001032f2;
  puVar3 = (undefined8 *)(param_5 + uVar14);
  puVar1 = puVar3 + 1;
  *puVar3 = 0;
  puVar20 = puVar3 + 0x200;
  puVar3[0x1ff] = 0;
  puVar35 = (undefined8 *)((ulong)puVar1 & 0xfffffffffffffff8);
  for (uVar13 = (ulong)(((int)puVar3 - (int)(undefined8 *)((ulong)puVar1 & 0xfffffffffffffff8)) +
                        0x1000U >> 3); uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar35 = 0;
    puVar35 = puVar35 + 1;
  }
  puVar3[0x200] = 0;
  puVar3[0x25f] = 0;
  puVar35 = (undefined8 *)((ulong)(puVar3 + 0x201) & 0xfffffffffffffff8);
  for (uVar13 = (ulong)(((int)puVar20 -
                        (int)(undefined8 *)((ulong)(puVar3 + 0x201) & 0xfffffffffffffff8)) + 0x300U
                       >> 3); uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar35 = 0;
    puVar35 = puVar35 + 1;
  }
  uVar14 = (ulong)param_3;
  puVar29 = param_2;
  do {
    uVar12 = *puVar29;
    if (0xa4 < uVar12) {
      uVar25 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> uVar25 == 0; uVar25 = uVar25 - 1) {
        }
      }
      uVar12 = 0xbd - (uVar25 ^ 0x1f);
    }
    puVar29 = puVar29 + 1;
    psVar15 = (short *)((long)puVar20 + (ulong)uVar12 * 4);
    *psVar15 = *psVar15 + 1;
  } while (param_2 + uVar14 + 1 != puVar29);
  uVar31 = *(ushort *)((long)puVar3 + 0x12fc);
  psVar15 = (short *)(puVar3 + 0x25f);
  do {
    uVar31 = uVar31 + *psVar15;
    psVar16 = psVar15 + -2;
    in_XMM0 = pshuflw(in_XMM0,ZEXT216(uVar31),0);
    *(int *)psVar15 = in_XMM0._0_4_;
    psVar15 = psVar16;
  } while ((short *)((long)puVar3 + 0xffc) != psVar16);
  uVar13 = 0;
  do {
    uVar12 = param_2[uVar13];
    uVar25 = uVar12;
    if (0xa4 < uVar12) {
      uVar25 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> uVar25 == 0; uVar25 = uVar25 - 1) {
        }
      }
      uVar25 = 0xbd - (uVar25 ^ 0x1f);
    }
    uVar31 = *(ushort *)((long)puVar20 + (ulong)(uVar25 + 1) * 4 + 2);
    *(ushort *)((long)puVar20 + (ulong)(uVar25 + 1) * 4 + 2) = uVar31 + 1;
    *(uint *)(puVar1 + uVar31) = uVar12;
    *(char *)((long)(puVar1 + uVar31) + 6) = (char)uVar13;
    bVar39 = uVar14 != uVar13;
    uVar13 = uVar13 + 1;
  } while (bVar39);
  puVar21 = (ushort *)((long)puVar3 + 0x1294);
  do {
    iVar32 = (uint)puVar21[1] - (uint)*puVar21;
    if (1 < iVar32) {
      HUF_simpleQuickSort(puVar1 + *puVar21,0,iVar32 + -1);
    }
    puVar21 = puVar21 + 2;
  } while ((ushort *)((long)puVar3 + 0x12fc) != puVar21);
  uVar13 = (ulong)param_3;
  lVar17 = uVar14 * 8;
  piVar28 = (int *)(puVar1 + uVar14);
  iVar32 = *piVar28;
  uVar12 = param_3;
  if (iVar32 == 0) {
    piVar10 = (int *)(puVar3 + uVar14);
    do {
      piVar28 = piVar10;
      iVar32 = *piVar28;
      uVar12 = (int)uVar13 - 1;
      uVar13 = (ulong)uVar12;
      piVar10 = piVar28 + -2;
    } while (iVar32 == 0);
    lVar17 = (long)piVar28 + (-8 - (long)puVar3);
  }
  iVar9 = (int)uVar13;
  *(int *)(puVar3 + 0x101) = iVar32 + *(int *)(lVar17 + (long)puVar3);
  *(undefined2 *)((int *)(lVar17 + (long)puVar3) + 1) = 0x100;
  lVar18 = (long)(iVar9 + 0xff);
  lVar17 = lVar18 * 8;
  *(undefined2 *)(piVar28 + 1) = 0x100;
  uVar25 = iVar9 - 2;
  if (iVar9 + 0xff < 0x101) {
    *(undefined4 *)puVar3 = 0x80000000;
    *(undefined1 *)((long)puVar1 + lVar17 + 7) = 0;
    if (-1 < iVar9) goto LAB_00102f6e;
  }
  else {
    uVar30 = (ulong)uVar25;
    puVar20 = puVar3 + 0x102;
    if (((int)(puVar3 + uVar30 + 0x103) - (int)puVar20 & 8U) == 0) goto LAB_00102e50;
    *(undefined4 *)puVar20 = 0x40000000;
    for (puVar20 = puVar3 + 0x103; puVar3 + uVar30 + 0x103 != puVar20; puVar20 = puVar20 + 2) {
LAB_00102e50:
      *(undefined4 *)puVar20 = 0x40000000;
      *(undefined4 *)(puVar20 + 1) = 0x40000000;
    }
    lVar33 = 0x101;
    iVar32 = 0x100;
    *(undefined4 *)puVar3 = 0x80000000;
    do {
      puVar29 = (uint *)(puVar1 + (int)uVar25);
      puVar11 = (uint *)(puVar1 + iVar32);
      uVar26 = *puVar29;
      uVar7 = *puVar11;
      if (uVar26 < uVar7) {
        puVar19 = (uint *)(puVar3 + (int)uVar25);
        uVar25 = uVar25 - 1;
        uVar27 = *puVar19;
        uVar8 = uVar7;
        if (uVar27 < uVar7) goto LAB_00102eb4;
LAB_00102f0b:
        uVar27 = uVar8;
        puVar19 = puVar11;
        iVar32 = iVar32 + 1;
      }
      else {
        lVar36 = (long)iVar32;
        iVar32 = iVar32 + 1;
        uVar8 = *(uint *)(puVar3 + lVar36 + 2);
        bVar39 = uVar8 <= uVar26;
        puVar19 = puVar29;
        puVar29 = puVar11;
        puVar11 = (uint *)(puVar3 + lVar36 + 2);
        uVar27 = uVar26;
        uVar26 = uVar7;
        if (bVar39) goto LAB_00102f0b;
LAB_00102eb4:
        uVar25 = uVar25 - 1;
      }
      *(uint *)(puVar3 + lVar33 + 1) = uVar26 + uVar27;
      *(short *)(puVar19 + 1) = (short)lVar33;
      *(short *)(puVar29 + 1) = (short)lVar33;
      lVar33 = lVar33 + 1;
    } while (uVar30 + 0x102 != lVar33);
    *(undefined1 *)((long)puVar1 + lVar17 + 7) = 0;
    puVar20 = puVar3 + lVar18 + -0xff;
    do {
      puVar35 = puVar20 + -1;
      *(char *)((long)puVar20 + 0x7ff) =
           *(char *)((long)puVar3 + (ulong)*(ushort *)((long)puVar20 + 0x7fc) * 8 + 0xf) + '\x01';
      puVar20 = puVar35;
    } while (puVar3 + lVar18 + (-0x100 - uVar30) != puVar35);
LAB_00102f6e:
    puVar21 = (ushort *)((long)puVar3 + 0xc);
    do {
      puVar22 = puVar21 + 4;
      *(char *)((long)puVar21 + 3) = *(char *)((long)puVar3 + (ulong)*puVar21 * 8 + 0xf) + '\x01';
      puVar21 = puVar22;
    } while (puVar22 != (ushort *)((long)puVar3 + (long)iVar9 * 8 + 0x14));
  }
  bVar5 = *(byte *)((long)puVar3 + (ulong)uVar12 * 8 + 0xf);
  uVar30 = (ulong)bVar5;
  if (param_4 < bVar5) {
    bVar24 = bVar5 - (char)param_4;
    bVar6 = *(byte *)((long)puVar1 + lVar17 + -0x7f1);
    uVar12 = (uint)bVar6;
    if (param_4 < bVar6) {
      lVar18 = 0;
      iVar32 = 0;
      do {
        *(char *)((long)puVar1 + lVar18 + lVar17 + -0x7f1) = (char)param_4;
        uVar13 = (ulong)((int)uVar13 - 1);
        iVar32 = (iVar32 + (1 << (bVar24 & 0x1f))) - (1 << (bVar5 - (char)uVar12 & 0x1f));
        uVar12 = (uint)*(byte *)((long)puVar3 + lVar18 + lVar17 + -0x7f1);
        lVar18 = lVar18 + -8;
      } while (param_4 < uVar12);
      uVar25 = iVar32 >> (bVar24 & 0x1f);
    }
    else {
      uVar25 = 0;
    }
    if (param_4 == uVar12) {
      uVar30 = (long)((int)uVar13 + -1);
      do {
        uVar13 = uVar30;
        uVar30 = uVar13 - 1;
      } while (param_4 == *(byte *)((long)puVar3 + uVar13 * 8 + 0xf));
    }
    iVar32 = (int)uVar13;
    lVar17 = (long)iVar32;
    uStack_48 = 0xf0f0f0f0f0f0f0f0;
    auStack_78[0] = (uint)__LC0;
    auStack_78[1] = (uint)((ulong)__LC0 >> 0x20);
    uStack_70 = (undefined2)_UNK_00103c68;
    uStack_6e = (undefined6)((ulong)_UNK_00103c68 >> 0x10);
    uStack_68 = __LC0;
    uStack_58 = __LC0;
    uStack_50 = _UNK_00103c68;
    uVar12 = param_4;
    uStack_60 = uStack_70;
    uStack_5e = uStack_6e;
    while (-1 < iVar32) {
      bVar5 = *(byte *)((long)puVar3 + lVar17 * 8 + 0xf);
      if (bVar5 < uVar12) {
        auStack_78[param_4 - bVar5] = (uint)lVar17;
        uVar12 = (uint)bVar5;
      }
      lVar17 = lVar17 + -1;
      iVar32 = (int)lVar17;
    }
    if (0 < (int)uVar25) {
LAB_001030b8:
      uVar12 = 0x1f;
      if (uVar25 != 0) {
        for (; uVar25 >> uVar12 == 0; uVar12 = uVar12 - 1) {
        }
      }
      uVar26 = 0x20 - (uVar12 ^ 0x1f);
      if (uVar26 != 1) {
        puVar29 = auStack_78 + (0x1f - (uVar12 ^ 0x1f));
        uVar12 = auStack_78[uVar26];
        do {
          uVar30 = (ulong)uVar12;
          uVar37 = (ulong)uVar26;
          uVar7 = *puVar29;
          uVar27 = uVar26 - 1;
          if ((uVar12 != 0xf0f0f0f0) &&
             ((uVar7 == 0xf0f0f0f0 ||
              (*(uint *)(puVar1 + uVar12) <= (uint)(*(int *)(puVar1 + uVar7) * 2))))) {
            if (uVar26 < 0xd) goto LAB_0010312b;
            goto LAB_00103154;
          }
          puVar29 = puVar29 + -1;
          uVar26 = uVar27;
          uVar12 = uVar7;
        } while (uVar27 != 1);
      }
      uVar30 = (ulong)auStack_78[1];
      uVar37 = 1;
LAB_0010312b:
      puVar29 = auStack_78 + uVar37;
      do {
        if ((int)uVar30 != -0xf0f0f10) goto LAB_00103154;
        uVar12 = (int)uVar37 + 1;
        uVar37 = (ulong)uVar12;
        puVar29 = puVar29 + 1;
        uVar30 = (ulong)*puVar29;
      } while (uVar12 != 0xd);
      uVar25 = uVar25 - 0x1000;
      uVar38 = 0xc;
      pcVar4 = (char *)((long)puVar3 + uVar30 * 8 + 0xf);
      *pcVar4 = *pcVar4 + '\x01';
      goto LAB_00103372;
    }
LAB_0010319b:
    if (uVar25 != 0) {
      uVar30 = (ulong)auStack_78[1];
      do {
        uVar25 = uVar25 + 1;
        if ((int)uVar30 == -0xf0f0f10) {
          iVar32 = (int)uVar13;
          uVar37 = (ulong)iVar32;
          if (param_4 == *(byte *)((long)puVar3 + uVar37 * 8 + 0xf)) {
            uVar13 = (long)(iVar32 + -1);
            do {
              uVar37 = uVar13;
              uVar13 = uVar37 - 1;
            } while (param_4 == *(byte *)((long)puVar3 + uVar37 * 8 + 0xf));
            iVar32 = (int)uVar37;
            uVar13 = uVar37 & 0xffffffff;
          }
          uVar30 = (ulong)(iVar32 + 1);
          pcVar4 = (char *)((long)puVar3 + uVar37 * 8 + 0x17);
          *pcVar4 = *pcVar4 + -1;
        }
        else {
          uVar30 = (ulong)((int)uVar30 + 1);
          pcVar4 = (char *)((long)puVar3 + uVar30 * 8 + 0xf);
          *pcVar4 = *pcVar4 + -1;
        }
      } while (uVar25 != 0);
    }
    uVar30 = (ulong)param_4;
  }
  uVar13 = 0xffffffffffffffff;
  if ((uint)uVar30 < 0xd) {
    Stack_98 = SUB1610((undefined1  [16])0x0,0);
    auStack_78[0] = 0;
    auStack_78[1] = 0;
    uStack_70 = 0;
    puVar34 = param_1 + 1;
    uStack_8e = 0;
    Stack_88 = SUB1610((undefined1  [16])0x0,6);
    uStack_6e = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    if (-1 < iVar9) {
      pbVar23 = (byte *)((long)puVar3 + 0xf);
      do {
        bVar5 = *pbVar23;
        pbVar23 = pbVar23 + 8;
        psVar15 = (short *)((long)&Stack_98 + (ulong)bVar5 * 2);
        *psVar15 = *psVar15 + 1;
      } while ((byte *)((long)puVar3 + (long)iVar9 * 8 + 0x17) != pbVar23);
    }
    uVar13 = 0;
    if ((uint)uVar30 != 0) {
      uVar31 = 0;
      uVar37 = uVar30;
      do {
        *(ushort *)((long)auStack_78 + uVar37 * 2) = uVar31;
        lVar17 = uVar37 * 2;
        uVar37 = uVar37 - 1;
        uVar31 = (ushort)(uVar31 + *(short *)((long)&Stack_98 + lVar17)) >> 1;
        uVar13 = uVar30;
      } while ((int)uVar37 != 0);
    }
    pbVar23 = (byte *)((long)puVar3 + 0xe);
    do {
      bVar5 = *pbVar23;
      pbVar2 = pbVar23 + 1;
      pbVar23 = pbVar23 + 8;
      puVar34[bVar5] = (ulong)*pbVar2;
    } while ((byte *)((long)puVar3 + uVar14 * 8 + 0x16) != pbVar23);
    do {
      uVar37 = *puVar34;
      uVar38 = uVar37 & 0xff;
      uVar31 = *(ushort *)((long)auStack_78 + uVar38 * 2);
      *(ushort *)((long)auStack_78 + uVar38 * 2) = uVar31 + 1;
      if (uVar38 != 0) {
        *puVar34 = (ulong)uVar31 << (0x40U - (char)uVar37 & 0x3f) | uVar37;
      }
      puVar34 = puVar34 + 1;
    } while (param_1 + uVar14 + 2 != puVar34);
    local_d4 = (undefined1)param_3;
    *param_1 = (ulong)CONCAT11(local_d4,(char)uVar30);
  }
LAB_001032f2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00103154:
  uVar26 = (int)uVar37 - 1;
  uVar38 = (ulong)uVar26;
  uVar12 = auStack_78[uVar38];
  pcVar4 = (char *)((long)puVar3 + uVar30 * 8 + 0xf);
  *pcVar4 = *pcVar4 + '\x01';
  uVar25 = uVar25 - (1 << ((byte)uVar26 & 0x1f));
  if (uVar12 == 0xf0f0f0f0) {
LAB_00103372:
    auStack_78[uVar38] = (uint)uVar30;
    uVar30 = (ulong)auStack_78[uVar37];
  }
  if ((int)uVar30 == 0) {
    auStack_78[uVar37] = 0xf0f0f0f0;
  }
  else {
    uVar12 = (int)uVar30 - 1;
    if ((uint)*(byte *)((long)puVar3 + (ulong)uVar12 * 8 + 0xf) != param_4 - (int)uVar37) {
      uVar12 = 0xf0f0f0f0;
    }
    auStack_78[uVar37] = uVar12;
  }
  if ((int)uVar25 < 1) goto LAB_0010319b;
  goto LAB_001030b8;
}



ulong HUF_estimateCompressedSize(long param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (-1 < (int)param_3) {
    uVar3 = 0;
    lVar4 = 1;
    do {
      lVar1 = lVar4 * 8;
      lVar2 = lVar4 * 4;
      lVar4 = lVar4 + 1;
      uVar3 = uVar3 + (ulong)*(byte *)(param_1 + lVar1) * (ulong)*(uint *)(param_2 + -4 + lVar2);
    } while ((ulong)param_3 + 2 != lVar4);
    return uVar3 >> 3;
  }
  return 0;
}



byte HUF_validateCTable(long param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  
  bVar3 = 0;
  if (param_3 <= *(byte *)(param_1 + 1)) {
    lVar4 = 0;
    do {
      lVar1 = lVar4 * 4;
      lVar2 = lVar4 * 8;
      lVar4 = lVar4 + 1;
      bVar3 = bVar3 | (*(int *)(param_2 + lVar1) != 0 && *(char *)(param_1 + 8 + lVar2) == '\0');
    } while ((int)lVar4 <= (int)param_3);
    bVar3 = bVar3 ^ 1;
  }
  return bVar3;
}



long HUF_compressBound(ulong param_1)

{
  return (param_1 >> 8) + 0x89 + param_1;
}



void HUF_compress1X_usingCTable(void)

{
  uint in_R9D;
  
  if ((in_R9D & 1) == 0) {
    HUF_compress1X_usingCTable_internal_default();
    return;
  }
  HUF_compress1X_usingCTable_internal_bmi2();
  return;
}



void HUF_compress4X_usingCTable(void)

{
  HUF_compress4X_usingCTable_internal();
  return;
}



int HUF_cardinality(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 != 0xffffffff) {
    iVar2 = 0;
    piVar1 = param_1 + (ulong)param_2 + 1;
    do {
      iVar2 = (iVar2 + 1) - (uint)(*param_1 == 0);
      param_1 = param_1 + 1;
    } while (param_1 != piVar1);
    return iVar2;
  }
  return 0;
}



int HUF_minTableLog(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return iVar1 + 1;
}



ulong HUF_optimalTableLog(uint param_1,undefined8 param_2,uint param_3,long param_4,long param_5,
                         long param_6,int *param_7,byte param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  ulong uStack_50;
  uint uStack_3c;
  
  if ((param_8 & 2) == 0) {
    uVar5 = FSE_optimalTableLog_internal();
    return uVar5;
  }
  uStack_3c = param_1;
  if (param_3 == 0xffffffff) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    piVar4 = param_7;
    do {
      uVar8 = (uVar8 + 1) - (uint)(*piVar4 == 0);
      bVar10 = piVar4 != param_7 + param_3;
      piVar4 = piVar4 + 1;
    } while (bVar10);
    iVar2 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    uVar8 = iVar2 + 1;
    if (param_1 < uVar8) goto LAB_001036a4;
  }
  uStack_50 = 0xfffffffffffffffe;
  uVar9 = uVar8;
  do {
    uVar5 = HUF_buildCTable_wksp(param_6,param_7,param_3,(ulong)uVar9,param_4,param_5);
    if (uVar5 < 0xffffffffffffff89) {
      if ((uVar8 < uVar9) && (uVar5 < uVar9)) break;
      uVar5 = HUF_writeCTable_wksp
                        (param_4 + 0x2ec,param_5 + -0x2ec,param_6,(ulong)param_3,uVar5,param_4,
                         param_5);
      if (uVar5 < 0xffffffffffffff89) {
        if (-1 < (int)param_3) {
          uVar7 = 0;
          lVar6 = 1;
          do {
            lVar1 = lVar6 * 8;
            lVar3 = lVar6 + -1;
            lVar6 = lVar6 + 1;
            uVar7 = uVar7 + (ulong)*(byte *)(param_6 + lVar1) * (ulong)(uint)param_7[lVar3];
          } while ((ulong)param_3 + 2 != lVar6);
          uVar5 = uVar5 + (uVar7 >> 3);
        }
        if (uStack_50 + 1 < uVar5) break;
        if (uVar5 < uStack_50) {
          uStack_50 = uVar5;
          uStack_3c = uVar9;
        }
      }
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 <= param_1);
LAB_001036a4:
  return (ulong)uStack_3c;
}



ulong HUF_compress_internal
                (undefined1 *param_1,long param_2,undefined1 *param_3,ulong param_4,uint param_5,
                uint param_6,undefined4 param_7,long param_8,ulong param_9,undefined8 *param_10,
                int *param_11,uint param_12)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  byte bVar17;
  uint local_4c [2];
  uint local_44;
  long local_40;
  
  bVar17 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = 0xffffffffffffffbe;
  uVar15 = (ulong)(-(int)param_8 & 7);
  local_4c[0] = param_5;
  if ((param_9 < uVar15) || (param_9 - uVar15 < 0x1f08)) goto LAB_00103a40;
  if ((param_4 == 0) || (param_2 == 0)) {
LAB_00103ae0:
    uVar7 = 0;
    goto LAB_00103a40;
  }
  uVar7 = 0xffffffffffffffb8;
  if (((0x20000 < param_4) || (uVar7 = 0xffffffffffffffd4, 0xc < param_6)) ||
     (uVar7 = 0xffffffffffffffd2, 0xff < param_5)) goto LAB_00103a40;
  if (param_5 == 0) {
    local_4c[0] = 0xff;
  }
  if (param_6 == 0) {
    param_6 = 0xb;
  }
  bVar9 = param_11 != (int *)0x0 & (byte)(param_12 >> 2);
  if ((bVar9 != 0) && (*param_11 == 2)) goto LAB_00103afa;
  param_8 = param_8 + uVar15;
  if (((param_12 & 8) != 0) && (0x9fff < param_4)) {
    local_44 = local_4c[0];
    uVar5 = HIST_count_simple(param_8,&local_44,param_3,0x1000);
    local_44 = local_4c[0];
    uVar6 = HIST_count_simple(param_8,&local_44,param_3 + (param_4 - 0x1000),0x1000);
    if ((ulong)uVar6 + (ulong)uVar5 < 0x45) goto LAB_00103ae0;
  }
  lVar10 = param_8 + 0xc08;
  uVar7 = HIST_count_wksp(param_8,local_4c,param_3,param_4,lVar10,0x1000);
  if (0xffffffffffffff88 < uVar7) goto LAB_00103a40;
  if (param_4 == uVar7) {
    *param_1 = *param_3;
    uVar7 = 1;
    goto LAB_00103a40;
  }
  if (uVar7 <= (param_4 >> 7) + 4) goto LAB_00103ae0;
  if (param_11 != (int *)0x0) {
    if (*param_11 == 1) {
      if (local_4c[0] <= *(byte *)((long)param_10 + 1)) {
        lVar8 = 0;
        bVar16 = false;
        do {
          lVar2 = lVar8 * 4;
          lVar3 = lVar8 + 1;
          lVar8 = lVar8 + 1;
          bVar16 = (bool)(bVar16 | (*(int *)(param_8 + lVar2) != 0 &&
                                   *(char *)(param_10 + lVar3) == '\0'));
        } while ((int)lVar8 <= (int)local_4c[0]);
        if (!bVar16) {
          if (bVar9 == 0) goto LAB_00103886;
          goto LAB_00103afa;
        }
      }
      *param_11 = 0;
      goto LAB_00103886;
    }
    if ((bVar9 == 0) || (*param_11 == 0)) goto LAB_00103886;
    goto LAB_00103afa;
  }
LAB_00103886:
  lVar8 = param_8 + 0x400;
  uVar4 = HUF_optimalTableLog(param_6,param_4,local_4c[0],lVar10,0x1300,lVar8,param_8,param_12);
  uVar7 = HUF_buildCTable_wksp(lVar8,param_8,local_4c[0],uVar4,lVar10,0x1300);
  if ((0xffffffffffffff88 < uVar7) ||
     (uVar7 = HUF_writeCTable_wksp
                        (param_1,param_2,lVar8,local_4c[0],uVar7 & 0xffffffff,lVar10,0x2ec),
     0xffffffffffffff88 < uVar7)) goto LAB_00103a40;
  if ((param_11 == (int *)0x0) || (*param_11 == 0)) {
    if (param_4 <= uVar7 + 0xc) goto LAB_00103ae0;
    if (param_10 != (undefined8 *)0x0) goto LAB_001039d0;
LAB_00103a0c:
    uVar7 = HUF_compressCTable_internal
                      (param_1,param_1 + uVar7,param_1 + param_2,param_3,param_4,param_7,lVar8,
                       param_12);
  }
  else {
    if (-1 < (int)local_4c[0]) {
      lVar10 = 1;
      uVar15 = 0;
      do {
        pbVar1 = (byte *)(param_10 + lVar10);
        lVar2 = lVar10 * 4;
        lVar10 = lVar10 + 1;
        uVar15 = uVar15 + (ulong)*pbVar1 * (ulong)*(uint *)(param_8 + -4 + lVar2);
      } while (lVar10 != (ulong)local_4c[0] + 2);
      uVar13 = 0;
      uVar11 = 0;
      do {
        uVar13 = uVar13 + (ulong)*(byte *)(param_8 + 0x408 + uVar11 * 8) *
                          (ulong)*(uint *)(param_8 + uVar11 * 4);
        bVar16 = uVar11 != local_4c[0];
        uVar11 = uVar11 + 1;
      } while (bVar16);
      if (((uVar13 >> 3) + uVar7 < uVar15 >> 3) && (uVar7 + 0xc < param_4)) {
        *param_11 = 0;
LAB_001039d0:
        *param_10 = *(undefined8 *)(param_8 + 0x400);
        param_10[0x100] = *(undefined8 *)(param_8 + 0xc00);
        lVar10 = (long)param_10 - (long)((ulong)(param_10 + 1) & 0xfffffffffffffff8);
        puVar12 = (undefined8 *)(lVar8 - lVar10);
        puVar14 = (undefined8 *)((ulong)(param_10 + 1) & 0xfffffffffffffff8);
        for (uVar15 = (ulong)((int)lVar10 + 0x808U >> 3); uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + (ulong)bVar17 * -2 + 1;
          puVar14 = puVar14 + (ulong)bVar17 * -2 + 1;
        }
        goto LAB_00103a0c;
      }
    }
LAB_00103afa:
    uVar7 = HUF_compressCTable_internal
                      (param_1,param_1,param_1 + param_2,param_3,param_4,param_7,param_10,param_12);
  }
LAB_00103a40:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



void HUF_compress1X_repeat(void)

{
  HUF_compress_internal();
  return;
}



void HUF_compress4X_repeat(void)

{
  HUF_compress_internal();
  return;
}


