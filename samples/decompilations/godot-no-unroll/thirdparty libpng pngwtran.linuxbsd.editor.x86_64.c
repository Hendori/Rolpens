
/* WARNING: Type propagation algorithm not settling */

void png_do_write_transformations(long param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  byte *pbVar16;
  ushort uVar17;
  uint uVar18;
  ushort *puVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  uint uVar23;
  long in_FS_OFFSET;
  undefined1 auVar24 [16];
  int local_58 [4];
  uint local_48;
  ulong local_44;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar18 = *(uint *)(param_1 + 0x134);
    if (((uVar18 & 0x100000) != 0) && (*(code **)(param_1 + 0x118) != (code *)0x0)) {
      (**(code **)(param_1 + 0x118))(param_1,param_2,*(long *)(param_1 + 0x228) + 1);
      uVar18 = *(uint *)(param_1 + 0x134);
    }
    if ((uVar18 & 0x8000) != 0) {
      png_do_strip_channel
                (param_2,*(long *)(param_1 + 0x228) + 1,(*(uint *)(param_1 + 0x130) >> 7 ^ 1) & 1);
      uVar18 = *(uint *)(param_1 + 0x134);
    }
    if ((uVar18 & 0x10000) != 0) {
      png_do_packswap(param_2,*(long *)(param_1 + 0x228) + 1);
      uVar18 = *(uint *)(param_1 + 0x134);
    }
    if (((uVar18 & 4) != 0) && ((param_2[4] & 0xffff00) == 0x10800)) {
      lVar5 = *(long *)(param_1 + 0x228);
      cVar1 = *(char *)(param_1 + 0x268);
      uVar23 = *param_2;
      uVar9 = (ulong)uVar23;
      pbVar14 = (byte *)(lVar5 + 1);
      if (cVar1 == '\x02') {
        if (uVar23 != 0) {
          iVar4 = 6;
          uVar18 = 0;
          pbVar16 = pbVar14;
          do {
            uVar18 = uVar18 | (*pbVar16 & 3) << ((byte)iVar4 & 0x1f);
            if (iVar4 == 0) {
              *pbVar14 = (byte)uVar18;
              iVar4 = 6;
              pbVar14 = pbVar14 + 1;
              uVar18 = 0;
            }
            else {
              iVar4 = iVar4 + -2;
            }
            bVar3 = (byte)uVar18;
            pbVar16 = pbVar16 + 1;
          } while (pbVar16 != (byte *)(lVar5 + 1 + uVar9));
          if (iVar4 != 6) {
LAB_00100696:
            *pbVar14 = bVar3;
          }
LAB_00100699:
          uVar18 = *(uint *)(param_1 + 0x134);
          uVar9 = (ulong)*param_2;
        }
      }
      else if (cVar1 == '\x04') {
        if (uVar23 != 0) {
          iVar4 = 4;
          uVar18 = 0;
          pbVar16 = pbVar14;
          do {
            uVar18 = uVar18 | (*pbVar16 & 0xf) << ((byte)iVar4 & 0x1f);
            if (iVar4 == 0) {
              *pbVar14 = (byte)uVar18;
              iVar4 = 4;
              pbVar14 = pbVar14 + 1;
              uVar18 = 0;
            }
            else {
              iVar4 = iVar4 + -4;
            }
            bVar3 = (byte)uVar18;
            pbVar16 = pbVar16 + 1;
          } while ((byte *)(lVar5 + 1 + uVar9) != pbVar16);
          if (iVar4 != 4) goto LAB_00100696;
          goto LAB_00100699;
        }
      }
      else if ((cVar1 == '\x01') && (uVar23 != 0)) {
        uVar18 = 0;
        uVar23 = 0x80;
        pbVar16 = pbVar14;
        do {
          if (*pbVar14 != 0) {
            uVar18 = uVar18 | uVar23;
          }
          pbVar14 = pbVar14 + 1;
          if (uVar23 == 1) {
            *pbVar16 = (byte)uVar18;
            uVar23 = 0x80;
            pbVar16 = pbVar16 + 1;
            uVar18 = 0;
          }
          else {
            uVar23 = (int)uVar23 >> 1;
          }
        } while (pbVar14 != (byte *)(lVar5 + 1 + uVar9));
        if (uVar23 == 0x80) goto LAB_00100699;
        *pbVar16 = (byte)uVar18;
        uVar18 = *(uint *)(param_1 + 0x134);
        uVar9 = (ulong)*param_2;
      }
      *(char *)((long)param_2 + 0x11) = cVar1;
      bVar3 = cVar1 * *(char *)((long)param_2 + 0x12);
      *(byte *)((long)param_2 + 0x13) = bVar3;
      if (bVar3 < 8) {
        uVar9 = bVar3 * uVar9 + 7 >> 3;
      }
      else {
        uVar9 = (bVar3 >> 3) * uVar9;
      }
      *(ulong *)(param_2 + 2) = uVar9;
    }
    if ((uVar18 & 0x10) != 0) {
      png_do_swap(param_2,*(long *)(param_1 + 0x228) + 1);
      uVar18 = *(uint *)(param_1 + 0x134);
    }
    if (((uVar18 & 8) != 0) && (bVar3 = (byte)param_2[4], bVar3 != 3)) {
      bVar2 = *(byte *)((long)param_2 + 0x11);
      lVar5 = *(long *)(param_1 + 0x228);
      uVar23 = (uint)bVar2;
      if ((bVar3 & 2) == 0) {
        uVar13 = (uint)*(byte *)(param_1 + 0x2e0);
        lVar22 = 1;
        iVar4 = bVar2 - uVar13;
      }
      else {
        uVar13 = (uint)*(byte *)(param_1 + 0x2dd);
        iVar4 = uVar23 - *(byte *)(param_1 + 0x2dd);
        local_58[1] = uVar23 - *(byte *)(param_1 + 0x2de);
        lVar22 = 3;
        local_58[2] = uVar23 - *(byte *)(param_1 + 0x2df);
        local_44 = (ulong)CONCAT14(*(byte *)(param_1 + 0x2df),(uint)*(byte *)(param_1 + 0x2de));
      }
      uVar20 = (uint)lVar22;
      local_48 = uVar13;
      local_58[0] = iVar4;
      if ((bVar3 & 4) != 0) {
        bVar3 = *(byte *)(param_1 + 0x2e1);
        uVar20 = uVar20 + 1;
        (&local_48)[lVar22] = (uint)bVar3;
        local_58[lVar22] = uVar23 - bVar3;
      }
      puVar19 = (ushort *)(lVar5 + 1);
      if (bVar2 < 8) {
        lVar22 = *(long *)(param_2 + 2);
        if (*(char *)(param_1 + 0x2e0) == '\x01') {
          uVar23 = 0x55;
          if (bVar2 != 2) {
            uVar23 = 0xff;
          }
        }
        else if ((bVar2 != 4) || (uVar23 = 0x11, *(char *)(param_1 + 0x2e0) != '\x03')) {
          uVar23 = 0xff;
        }
        if (lVar22 != 0) {
          iVar21 = -uVar13;
          do {
            if (iVar4 == iVar21 || SBORROW4(iVar4,iVar21) != (int)(iVar4 + uVar13) < 0) {
              bVar3 = 0;
            }
            else {
              uVar18 = 0;
              iVar15 = -iVar4;
              iVar11 = iVar4;
              do {
                while (iVar11 < 1) {
                  iVar11 = iVar11 - uVar13;
                  uVar18 = uVar18 | (byte)((byte)*puVar19 >> ((byte)iVar15 & 0x1f)) & uVar23;
                  bVar3 = (byte)uVar18;
                  iVar15 = iVar15 + uVar13;
                  if (iVar11 == iVar21 || SBORROW4(iVar11,iVar21) != (int)(iVar11 + uVar13) < 0)
                  goto LAB_0010046f;
                }
                iVar10 = iVar11 - uVar13;
                iVar15 = iVar15 + uVar13;
                uVar18 = uVar18 | (uint)(byte)*puVar19 << ((byte)iVar11 & 0x1f);
                bVar3 = (byte)uVar18;
                iVar11 = iVar10;
              } while (iVar10 != iVar21 && SBORROW4(iVar10,iVar21) == (int)(iVar10 + uVar13) < 0);
            }
LAB_0010046f:
            *(byte *)puVar19 = bVar3;
            puVar19 = (ushort *)((long)puVar19 + 1);
          } while (puVar19 != (ushort *)(lVar5 + 1 + lVar22));
LAB_0010047b:
          uVar18 = *(uint *)(param_1 + 0x134);
        }
      }
      else {
        uVar23 = uVar20 * *param_2;
        if (bVar2 == 8) {
          if (uVar23 != 0) {
            iVar21 = (int)puVar19;
            do {
              iVar15 = -uVar13;
              if (iVar15 < iVar4) {
                uVar18 = 0;
                iVar11 = -iVar4;
                do {
                  while (0 < iVar4) {
                    iVar10 = iVar4 - uVar13;
                    iVar11 = iVar11 + uVar13;
                    uVar18 = uVar18 | (uint)(byte)*puVar19 << ((byte)iVar4 & 0x1f);
                    bVar3 = (byte)uVar18;
                    iVar4 = iVar10;
                    if (iVar10 == iVar15 || SBORROW4(iVar10,iVar15) != (int)(iVar10 + uVar13) < 0)
                    goto LAB_001007b9;
                  }
                  iVar4 = iVar4 - uVar13;
                  uVar18 = uVar18 | (byte)((byte)*puVar19 >> ((byte)iVar11 & 0x1f));
                  bVar3 = (byte)uVar18;
                  iVar11 = iVar11 + uVar13;
                } while (iVar4 != iVar15 && SBORROW4(iVar4,iVar15) == (int)(iVar4 + uVar13) < 0);
              }
              else {
                bVar3 = 0;
              }
LAB_001007b9:
              *(byte *)puVar19 = bVar3;
              iVar4 = (int)puVar19;
              puVar19 = (ushort *)((long)puVar19 + 1);
              if (puVar19 == (ushort *)(lVar5 + 1 + (ulong)uVar23)) goto LAB_0010047b;
              uVar9 = (ulong)(uint)((1 - iVar21) + iVar4) % (ulong)uVar20;
              iVar4 = local_58[uVar9];
              uVar13 = (&local_48)[uVar9];
            } while( true );
          }
        }
        else if (uVar23 != 0) {
          uVar18 = 0;
          do {
            iVar21 = -uVar13;
            uVar17 = *puVar19 << 8 | *puVar19 >> 8;
            if (iVar4 == iVar21 || SBORROW4(iVar4,iVar21) != (int)(iVar4 + uVar13) < 0) {
              uVar12 = 0;
              bVar3 = 0;
            }
            else {
              uVar12 = 0;
              iVar15 = -iVar4;
              do {
                while (0 < iVar4) {
                  iVar11 = iVar4 - uVar13;
                  iVar15 = iVar15 + uVar13;
                  uVar12 = uVar12 | (uint)uVar17 << ((byte)iVar4 & 0x1f);
                  iVar4 = iVar11;
                  if (iVar11 == iVar21 || SBORROW4(iVar11,iVar21) != (int)(iVar11 + uVar13) < 0)
                  goto LAB_001005a9;
                }
                iVar4 = iVar4 - uVar13;
                uVar12 = uVar12 | uVar17 >> ((byte)iVar15 & 0x1f);
                iVar15 = iVar15 + uVar13;
              } while (iVar4 != iVar21 && SBORROW4(iVar4,iVar21) == (int)(iVar4 + uVar13) < 0);
LAB_001005a9:
              bVar3 = (byte)(uVar12 >> 8);
            }
            *(byte *)puVar19 = bVar3;
            uVar18 = uVar18 + 1;
            *(byte *)((long)puVar19 + 1) = (byte)uVar12;
            if (uVar18 == uVar23) goto LAB_0010047b;
            iVar4 = local_58[(ulong)uVar18 % (ulong)uVar20];
            uVar13 = (&local_48)[(ulong)uVar18 % (ulong)uVar20];
            puVar19 = puVar19 + 1;
          } while( true );
        }
      }
    }
    if ((uVar18 & 0x20000) == 0) {
LAB_0010007b:
      if ((uVar18 & 0x80000) != 0) {
        lVar5 = *(long *)(param_1 + 0x228) + 1;
        if ((char)param_2[4] == '\x06') {
          uVar23 = *param_2;
          if (*(char *)((long)param_2 + 0x11) == '\b') {
            lVar22 = lVar5 + (ulong)uVar23 * 4;
            if (uVar23 != 0) {
              do {
                lVar6 = lVar5 + 4;
                *(byte *)(lVar5 + 3) = ~*(byte *)(lVar5 + 3);
                lVar5 = lVar6;
              } while (lVar22 != lVar6);
              goto LAB_00100237;
            }
          }
          else if (uVar23 != 0) {
            lVar22 = lVar5;
            do {
              lVar6 = lVar22 + 8;
              *(ushort *)(lVar22 + 6) = *(ushort *)(lVar22 + 6) ^ 0xffff;
              lVar22 = lVar6;
            } while (lVar5 + (ulong)uVar23 * 8 != lVar6);
LAB_00100237:
            uVar18 = *(uint *)(param_1 + 0x134);
          }
        }
        else if ((char)param_2[4] == '\x04') {
          uVar23 = *param_2;
          if (*(char *)((long)param_2 + 0x11) == '\b') {
            lVar22 = lVar5;
            if (uVar23 != 0) {
              do {
                lVar6 = lVar22 + 2;
                *(byte *)(lVar22 + 1) = ~*(byte *)(lVar22 + 1);
                lVar22 = lVar6;
              } while (lVar5 + (ulong)uVar23 * 2 != lVar6);
              goto LAB_00100237;
            }
          }
          else if (uVar23 != 0) {
            lVar22 = lVar5;
            do {
              lVar6 = lVar22 + 4;
              *(ushort *)(lVar22 + 2) = *(ushort *)(lVar22 + 2) ^ 0xffff;
              lVar22 = lVar6;
            } while (lVar6 != lVar5 + (ulong)uVar23 * 4);
            goto LAB_00100237;
          }
        }
      }
    }
    else {
      lVar5 = *(long *)(param_1 + 0x228);
      puVar7 = (undefined4 *)(lVar5 + 1);
      if ((char)param_2[4] == '\x06') {
        uVar23 = *param_2;
        if (*(char *)((long)param_2 + 0x11) == '\b') {
          if (uVar23 != 0) {
            do {
              puVar8 = puVar7 + 1;
              *puVar7 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)puVar7,
                                                   *(undefined1 *)((long)puVar7 + 3)),
                                          *(undefined1 *)((long)puVar7 + 2)),
                                 *(undefined1 *)((long)puVar7 + 1));
              puVar7 = puVar8;
            } while (puVar8 != (undefined4 *)(lVar5 + 1 + (ulong)uVar23 * 4));
            goto LAB_0010031a;
          }
        }
        else if (uVar23 != 0) {
          lVar22 = lVar5;
          do {
            auVar24._8_8_ = 0;
            auVar24._0_8_ = *(ulong *)(lVar22 + 1);
            lVar6 = lVar22 + 8;
            auVar24 = pshuflw(auVar24,auVar24,0x39);
            *(long *)(lVar22 + 1) = auVar24._0_8_;
            lVar22 = lVar6;
          } while (lVar5 + (ulong)uVar23 * 8 != lVar6);
LAB_0010031a:
          uVar18 = *(uint *)(param_1 + 0x134);
          goto LAB_0010007b;
        }
      }
      else if ((char)param_2[4] == '\x04') {
        uVar23 = *param_2;
        if (*(char *)((long)param_2 + 0x11) == '\b') {
          if (uVar23 != 0) {
            do {
              puVar8 = (undefined4 *)((long)puVar7 + 2);
              *(ushort *)puVar7 = CONCAT11(*(undefined1 *)puVar7,*(undefined1 *)((long)puVar7 + 1));
              puVar7 = puVar8;
            } while (puVar8 != (undefined4 *)(lVar5 + 1 + (ulong)uVar23 * 2));
            goto LAB_0010031a;
          }
        }
        else if (uVar23 != 0) {
          do {
            puVar8 = puVar7 + 1;
            *puVar7 = CONCAT31(CONCAT21(*(undefined2 *)puVar7,*(undefined1 *)((long)puVar7 + 3)),
                               *(undefined1 *)((long)puVar7 + 2));
            puVar7 = puVar8;
          } while ((undefined4 *)(lVar5 + 1 + (ulong)uVar23 * 4) != puVar8);
          goto LAB_0010031a;
        }
      }
    }
    if ((uVar18 & 1) != 0) {
      png_do_bgr(param_2,*(long *)(param_1 + 0x228) + 1);
      uVar18 = *(uint *)(param_1 + 0x134);
    }
    if ((uVar18 & 0x20) != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        png_do_invert(param_2,*(long *)(param_1 + 0x228) + 1);
        return;
      }
      goto LAB_00100887;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100887:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


