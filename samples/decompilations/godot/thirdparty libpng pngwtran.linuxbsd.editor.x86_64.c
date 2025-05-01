
/* WARNING: Type propagation algorithm not settling */

void png_do_write_transformations(long param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  byte *pbVar17;
  ushort uVar18;
  uint uVar19;
  ushort *puVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  long in_FS_OFFSET;
  undefined1 auVar24 [16];
  int local_58 [4];
  uint local_48;
  ulong local_44;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar19 = *(uint *)(param_1 + 0x134);
    if (((uVar19 & 0x100000) != 0) && (*(code **)(param_1 + 0x118) != (code *)0x0)) {
      (**(code **)(param_1 + 0x118))(param_1,param_2,*(long *)(param_1 + 0x228) + 1);
      uVar19 = *(uint *)(param_1 + 0x134);
    }
    if ((uVar19 & 0x8000) != 0) {
      png_do_strip_channel
                (param_2,*(long *)(param_1 + 0x228) + 1,(*(uint *)(param_1 + 0x130) >> 7 ^ 1) & 1);
      uVar19 = *(uint *)(param_1 + 0x134);
    }
    if ((uVar19 & 0x10000) != 0) {
      png_do_packswap(param_2,*(long *)(param_1 + 0x228) + 1);
      uVar19 = *(uint *)(param_1 + 0x134);
    }
    if (((uVar19 & 4) != 0) && ((param_2[4] & 0xffff00) == 0x10800)) {
      lVar8 = *(long *)(param_1 + 0x228);
      cVar1 = *(char *)(param_1 + 0x268);
      uVar23 = *param_2;
      uVar10 = (ulong)uVar23;
      pbVar15 = (byte *)(lVar8 + 1);
      if (cVar1 == '\x02') {
        if (uVar23 != 0) {
          iVar4 = 6;
          uVar19 = 0;
          pbVar17 = pbVar15;
          do {
            uVar19 = uVar19 | (*pbVar17 & 3) << ((byte)iVar4 & 0x1f);
            if (iVar4 == 0) {
              *pbVar15 = (byte)uVar19;
              iVar4 = 6;
              pbVar15 = pbVar15 + 1;
              uVar19 = 0;
            }
            else {
              iVar4 = iVar4 + -2;
            }
            bVar3 = (byte)uVar19;
            pbVar17 = pbVar17 + 1;
          } while (pbVar17 != (byte *)(lVar8 + 1 + uVar10));
          if (iVar4 != 6) {
LAB_001006b1:
            *pbVar15 = bVar3;
          }
LAB_001006b4:
          uVar19 = *(uint *)(param_1 + 0x134);
          uVar10 = (ulong)*param_2;
        }
      }
      else if (cVar1 == '\x04') {
        if (uVar23 != 0) {
          iVar4 = 4;
          uVar19 = 0;
          pbVar17 = pbVar15;
          do {
            uVar19 = uVar19 | (*pbVar17 & 0xf) << ((byte)iVar4 & 0x1f);
            if (iVar4 == 0) {
              *pbVar15 = (byte)uVar19;
              iVar4 = 4;
              pbVar15 = pbVar15 + 1;
              uVar19 = 0;
            }
            else {
              iVar4 = iVar4 + -4;
            }
            bVar3 = (byte)uVar19;
            pbVar17 = pbVar17 + 1;
          } while ((byte *)(lVar8 + 1 + uVar10) != pbVar17);
          if (iVar4 != 4) goto LAB_001006b1;
          goto LAB_001006b4;
        }
      }
      else if ((cVar1 == '\x01') && (uVar23 != 0)) {
        uVar19 = 0;
        uVar23 = 0x80;
        pbVar17 = pbVar15;
        do {
          if (*pbVar15 != 0) {
            uVar19 = uVar19 | uVar23;
          }
          pbVar15 = pbVar15 + 1;
          if (uVar23 == 1) {
            *pbVar17 = (byte)uVar19;
            uVar23 = 0x80;
            pbVar17 = pbVar17 + 1;
            uVar19 = 0;
          }
          else {
            uVar23 = (int)uVar23 >> 1;
          }
        } while (pbVar15 != (byte *)(lVar8 + 1 + uVar10));
        if (uVar23 == 0x80) goto LAB_001006b4;
        *pbVar17 = (byte)uVar19;
        uVar19 = *(uint *)(param_1 + 0x134);
        uVar10 = (ulong)*param_2;
      }
      *(char *)((long)param_2 + 0x11) = cVar1;
      bVar3 = cVar1 * *(char *)((long)param_2 + 0x12);
      *(byte *)((long)param_2 + 0x13) = bVar3;
      if (bVar3 < 8) {
        uVar10 = bVar3 * uVar10 + 7 >> 3;
      }
      else {
        uVar10 = (bVar3 >> 3) * uVar10;
      }
      *(ulong *)(param_2 + 2) = uVar10;
    }
    if ((uVar19 & 0x10) != 0) {
      png_do_swap(param_2,*(long *)(param_1 + 0x228) + 1);
      uVar19 = *(uint *)(param_1 + 0x134);
    }
    if (((uVar19 & 8) != 0) && (bVar3 = (byte)param_2[4], bVar3 != 3)) {
      bVar2 = *(byte *)((long)param_2 + 0x11);
      lVar8 = *(long *)(param_1 + 0x228);
      uVar23 = (uint)bVar2;
      if ((bVar3 & 2) == 0) {
        uVar14 = (uint)*(byte *)(param_1 + 0x2e0);
        lVar9 = 1;
        iVar4 = bVar2 - uVar14;
      }
      else {
        uVar14 = (uint)*(byte *)(param_1 + 0x2dd);
        iVar4 = uVar23 - *(byte *)(param_1 + 0x2dd);
        local_58[1] = uVar23 - *(byte *)(param_1 + 0x2de);
        lVar9 = 3;
        local_58[2] = uVar23 - *(byte *)(param_1 + 0x2df);
        local_44 = (ulong)CONCAT14(*(byte *)(param_1 + 0x2df),(uint)*(byte *)(param_1 + 0x2de));
      }
      uVar21 = (uint)lVar9;
      local_48 = uVar14;
      local_58[0] = iVar4;
      if ((bVar3 & 4) != 0) {
        bVar3 = *(byte *)(param_1 + 0x2e1);
        uVar21 = uVar21 + 1;
        (&local_48)[lVar9] = (uint)bVar3;
        local_58[lVar9] = uVar23 - bVar3;
      }
      puVar20 = (ushort *)(lVar8 + 1);
      if (bVar2 < 8) {
        lVar9 = *(long *)(param_2 + 2);
        if (*(char *)(param_1 + 0x2e0) == '\x01') {
          uVar23 = 0x55;
          if (bVar2 != 2) {
            uVar23 = 0xff;
          }
        }
        else if ((bVar2 != 4) || (uVar23 = 0x11, *(char *)(param_1 + 0x2e0) != '\x03')) {
          uVar23 = 0xff;
        }
        if (lVar9 != 0) {
          iVar22 = -uVar14;
          do {
            if (iVar4 == iVar22 || SBORROW4(iVar4,iVar22) != (int)(iVar4 + uVar14) < 0) {
              bVar3 = 0;
            }
            else {
              uVar19 = 0;
              iVar16 = -iVar4;
              iVar12 = iVar4;
              do {
                while (iVar12 < 1) {
                  iVar12 = iVar12 - uVar14;
                  uVar19 = uVar19 | (byte)((byte)*puVar20 >> ((byte)iVar16 & 0x1f)) & uVar23;
                  bVar3 = (byte)uVar19;
                  iVar16 = iVar16 + uVar14;
                  if (iVar12 == iVar22 || SBORROW4(iVar12,iVar22) != (int)(iVar12 + uVar14) < 0)
                  goto LAB_0010046f;
                }
                iVar11 = iVar12 - uVar14;
                iVar16 = iVar16 + uVar14;
                uVar19 = uVar19 | (uint)(byte)*puVar20 << ((byte)iVar12 & 0x1f);
                bVar3 = (byte)uVar19;
                iVar12 = iVar11;
              } while (iVar11 != iVar22 && SBORROW4(iVar11,iVar22) == (int)(iVar11 + uVar14) < 0);
            }
LAB_0010046f:
            *(byte *)puVar20 = bVar3;
            puVar20 = (ushort *)((long)puVar20 + 1);
          } while (puVar20 != (ushort *)(lVar8 + 1 + lVar9));
LAB_0010047b:
          uVar19 = *(uint *)(param_1 + 0x134);
        }
      }
      else {
        uVar23 = uVar21 * *param_2;
        if (bVar2 == 8) {
          if (uVar23 != 0) {
            iVar22 = (int)puVar20;
            do {
              iVar16 = -uVar14;
              if (iVar16 < iVar4) {
                uVar19 = 0;
                iVar12 = -iVar4;
                do {
                  while (0 < iVar4) {
                    iVar11 = iVar4 - uVar14;
                    iVar12 = iVar12 + uVar14;
                    uVar19 = uVar19 | (uint)(byte)*puVar20 << ((byte)iVar4 & 0x1f);
                    bVar3 = (byte)uVar19;
                    iVar4 = iVar11;
                    if (iVar11 == iVar16 || SBORROW4(iVar11,iVar16) != (int)(iVar11 + uVar14) < 0)
                    goto LAB_001007e9;
                  }
                  iVar4 = iVar4 - uVar14;
                  uVar19 = uVar19 | (byte)((byte)*puVar20 >> ((byte)iVar12 & 0x1f));
                  bVar3 = (byte)uVar19;
                  iVar12 = iVar12 + uVar14;
                } while (iVar4 != iVar16 && SBORROW4(iVar4,iVar16) == (int)(iVar4 + uVar14) < 0);
              }
              else {
                bVar3 = 0;
              }
LAB_001007e9:
              *(byte *)puVar20 = bVar3;
              iVar4 = (int)puVar20;
              puVar20 = (ushort *)((long)puVar20 + 1);
              if (puVar20 == (ushort *)(lVar8 + 1 + (ulong)uVar23)) goto LAB_0010047b;
              uVar10 = (ulong)(uint)((1 - iVar22) + iVar4) % (ulong)uVar21;
              iVar4 = local_58[uVar10];
              uVar14 = (&local_48)[uVar10];
            } while( true );
          }
        }
        else if (uVar23 != 0) {
          uVar19 = 0;
          do {
            iVar22 = -uVar14;
            uVar18 = *puVar20 << 8 | *puVar20 >> 8;
            if (iVar4 == iVar22 || SBORROW4(iVar4,iVar22) != (int)(iVar4 + uVar14) < 0) {
              uVar13 = 0;
              bVar3 = 0;
            }
            else {
              uVar13 = 0;
              iVar16 = -iVar4;
              do {
                while (0 < iVar4) {
                  iVar12 = iVar4 - uVar14;
                  iVar16 = iVar16 + uVar14;
                  uVar13 = uVar13 | (uint)uVar18 << ((byte)iVar4 & 0x1f);
                  iVar4 = iVar12;
                  if (iVar12 == iVar22 || SBORROW4(iVar12,iVar22) != (int)(iVar12 + uVar14) < 0)
                  goto LAB_001005a9;
                }
                iVar4 = iVar4 - uVar14;
                uVar13 = uVar13 | uVar18 >> ((byte)iVar16 & 0x1f);
                iVar16 = iVar16 + uVar14;
              } while (iVar4 != iVar22 && SBORROW4(iVar4,iVar22) == (int)(iVar4 + uVar14) < 0);
LAB_001005a9:
              bVar3 = (byte)(uVar13 >> 8);
            }
            *(byte *)puVar20 = bVar3;
            uVar19 = uVar19 + 1;
            *(byte *)((long)puVar20 + 1) = (byte)uVar13;
            if (uVar19 == uVar23) goto LAB_0010047b;
            iVar4 = local_58[(ulong)uVar19 % (ulong)uVar21];
            uVar14 = (&local_48)[(ulong)uVar19 % (ulong)uVar21];
            puVar20 = puVar20 + 1;
          } while( true );
        }
      }
    }
    if ((uVar19 & 0x20000) == 0) {
LAB_0010007b:
      if ((uVar19 & 0x80000) != 0) {
        lVar9 = *(long *)(param_1 + 0x228);
        lVar8 = lVar9 + 1;
        if ((char)param_2[4] == '\x06') {
          uVar23 = *param_2;
          if (*(char *)((long)param_2 + 0x11) == '\b') {
            lVar5 = lVar8 + (ulong)uVar23 * 4;
            if (uVar23 != 0) {
              if (((int)lVar5 - (int)lVar8 & 4U) != 0) {
                lVar8 = lVar9 + 5;
                *(byte *)(lVar9 + 4) = ~*(byte *)(lVar9 + 4);
                if (lVar5 == lVar8) goto LAB_00100237;
              }
              do {
                *(byte *)(lVar8 + 3) = ~*(byte *)(lVar8 + 3);
                lVar9 = lVar8 + 8;
                *(byte *)(lVar8 + 7) = ~*(byte *)(lVar8 + 7);
                lVar8 = lVar9;
              } while (lVar5 != lVar9);
              goto LAB_00100237;
            }
          }
          else if (uVar23 != 0) {
            lVar9 = lVar8;
            do {
              lVar5 = lVar9 + 8;
              *(ushort *)(lVar9 + 6) = *(ushort *)(lVar9 + 6) ^ 0xffff;
              lVar9 = lVar5;
            } while (lVar8 + (ulong)uVar23 * 8 != lVar5);
LAB_00100237:
            uVar19 = *(uint *)(param_1 + 0x134);
          }
        }
        else if ((char)param_2[4] == '\x04') {
          uVar23 = *param_2;
          if (*(char *)((long)param_2 + 0x11) == '\b') {
            lVar5 = lVar8 + (ulong)uVar23 * 2;
            if (uVar23 != 0) {
              if (((int)lVar5 - (int)lVar8 & 2U) != 0) {
                *(byte *)(lVar9 + 2) = ~*(byte *)(lVar9 + 2);
                lVar8 = lVar9 + 3;
                if (lVar5 == lVar9 + 3) goto LAB_00100237;
              }
              do {
                *(byte *)(lVar8 + 1) = ~*(byte *)(lVar8 + 1);
                lVar9 = lVar8 + 4;
                *(byte *)(lVar8 + 3) = ~*(byte *)(lVar8 + 3);
                lVar8 = lVar9;
              } while (lVar5 != lVar9);
              goto LAB_00100237;
            }
          }
          else if (uVar23 != 0) {
            lVar9 = lVar8;
            do {
              lVar5 = lVar9 + 4;
              *(ushort *)(lVar9 + 2) = *(ushort *)(lVar9 + 2) ^ 0xffff;
              lVar9 = lVar5;
            } while (lVar5 != lVar8 + (ulong)uVar23 * 4);
            goto LAB_00100237;
          }
        }
      }
    }
    else {
      lVar8 = *(long *)(param_1 + 0x228);
      puVar6 = (undefined4 *)(lVar8 + 1);
      if ((char)param_2[4] == '\x06') {
        uVar23 = *param_2;
        if (*(char *)((long)param_2 + 0x11) == '\b') {
          if (uVar23 != 0) {
            do {
              puVar7 = puVar6 + 1;
              *puVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)puVar6,
                                                   *(undefined1 *)((long)puVar6 + 3)),
                                          *(undefined1 *)((long)puVar6 + 2)),
                                 *(undefined1 *)((long)puVar6 + 1));
              puVar6 = puVar7;
            } while (puVar7 != (undefined4 *)(lVar8 + 1 + (ulong)uVar23 * 4));
            goto LAB_0010031a;
          }
        }
        else if (uVar23 != 0) {
          lVar9 = lVar8;
          do {
            auVar24._8_8_ = 0;
            auVar24._0_8_ = *(ulong *)(lVar9 + 1);
            lVar5 = lVar9 + 8;
            auVar24 = pshuflw(auVar24,auVar24,0x39);
            *(long *)(lVar9 + 1) = auVar24._0_8_;
            lVar9 = lVar5;
          } while (lVar8 + (ulong)uVar23 * 8 != lVar5);
LAB_0010031a:
          uVar19 = *(uint *)(param_1 + 0x134);
          goto LAB_0010007b;
        }
      }
      else if ((char)param_2[4] == '\x04') {
        uVar23 = *param_2;
        if (*(char *)((long)param_2 + 0x11) == '\b') {
          if (uVar23 != 0) {
            do {
              puVar7 = (undefined4 *)((long)puVar6 + 2);
              *(ushort *)puVar6 = CONCAT11(*(undefined1 *)puVar6,*(undefined1 *)((long)puVar6 + 1));
              puVar6 = puVar7;
            } while (puVar7 != (undefined4 *)(lVar8 + 1 + (ulong)uVar23 * 2));
            goto LAB_0010031a;
          }
        }
        else if (uVar23 != 0) {
          do {
            puVar7 = puVar6 + 1;
            *puVar6 = CONCAT31(CONCAT21(*(undefined2 *)puVar6,*(undefined1 *)((long)puVar6 + 3)),
                               *(undefined1 *)((long)puVar6 + 2));
            puVar6 = puVar7;
          } while ((undefined4 *)(lVar8 + 1 + (ulong)uVar23 * 4) != puVar7);
          goto LAB_0010031a;
        }
      }
    }
    if ((uVar19 & 1) != 0) {
      png_do_bgr(param_2,*(long *)(param_1 + 0x228) + 1);
      uVar19 = *(uint *)(param_1 + 0x134);
    }
    if ((uVar19 & 0x20) != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        png_do_invert(param_2,*(long *)(param_1 + 0x228) + 1);
        return;
      }
      goto LAB_001008b7;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001008b7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


