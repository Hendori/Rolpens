
/* DecodeRBlock(void const*, void*, unsigned long) */

void DecodeRBlock(void *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar11;
  int iVar10;
  
  uVar8 = 0;
  iVar7 = 0x21;
                    /* WARNING: Load size is inaccurate */
  uVar2 = *param_1;
  iVar1 = *(int *)(&g_alpha11Mul + (ulong)((uint)(uVar2 >> 0xc) & 0xf) * 4);
  do {
    iVar10 = iVar7 + 0xc;
    uVar6 = uVar8;
    do {
      iVar5 = iVar10;
      iVar4 = *(int *)(&g_alpha +
                      (ulong)((uint)(uVar2 >> 3) & 0x1e0) +
                      (ulong)((uint)((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                                      (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8
                                      | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                                      (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38) >>
                                    ((byte)iVar5 & 0x3f)) & 7) * 4) * iVar1 +
              ((uint)uVar2 & 0xff) * 8 + 4;
      iVar10 = iVar4 + 7;
      if (-1 < iVar4) {
        iVar10 = iVar4;
      }
      uVar9 = iVar10 >> 3;
      uVar3 = (int)~uVar9 >> 0x1f;
      if (uVar9 < 0x100) {
        uVar3 = uVar9;
      }
      uVar11 = (ulong)uVar6;
      uVar6 = uVar6 + (int)param_3;
      *(uint *)((long)param_2 + uVar11 * 4) = uVar3 & 0xff | 0xff000000;
      iVar10 = iVar5 + -3;
    } while (iVar5 + -3 != iVar7);
    uVar8 = uVar8 + 1;
    iVar7 = iVar5 + -0xf;
  } while (uVar8 != 4);
  return;
}



/* DecodeRGBlock(void const*, void*, unsigned long) */

void DecodeRGBlock(void *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar7;
  
  iVar13 = 0x21;
                    /* WARNING: Load size is inaccurate */
  uVar3 = *param_1;
  uVar4 = *(ulong *)((long)param_1 + 8);
  iVar1 = *(int *)(&g_alpha11Mul + (ulong)((uint)(uVar4 >> 0xc) & 0xf) * 4);
  iVar2 = *(int *)(&g_alpha11Mul + (ulong)((uint)(uVar3 >> 0xc) & 0xf) * 4);
  uVar10 = 0;
  do {
    iVar8 = iVar13 + 0xc;
    uVar11 = uVar10;
    do {
      iVar9 = *(int *)(&g_alpha +
                      (ulong)((uint)(uVar3 >> 3) & 0x1e0) +
                      (ulong)((uint)((uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                                      (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8
                                      | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
                                      (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38) >>
                                    ((byte)iVar8 & 0x3f)) & 7) * 4) * iVar2 +
              ((uint)uVar3 & 0xff) * 8 + 4;
      iVar7 = iVar9 + 7;
      if (-1 < iVar9) {
        iVar7 = iVar9;
      }
      uVar6 = iVar7 >> 3;
      uVar5 = (int)~uVar6 >> 0x1f;
      if (uVar6 < 0x100) {
        uVar5 = uVar6;
      }
      iVar9 = *(int *)(&g_alpha +
                      (ulong)((uint)(uVar4 >> 3) & 0x1e0) +
                      (ulong)((uint)((uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                                      (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8
                                      | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                                      (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38) >>
                                    ((byte)iVar8 & 0x3f)) & 7) * 4) * iVar1 +
              ((uint)uVar4 & 0xff) * 8 + 4;
      iVar7 = iVar9 + 7;
      if (-1 < iVar9) {
        iVar7 = iVar9;
      }
      uVar12 = iVar7 >> 3;
      uVar6 = (int)~uVar12 >> 0x1f;
      if (uVar12 < 0x100) {
        uVar6 = uVar12;
      }
      iVar8 = iVar8 + -3;
      *(uint *)((long)param_2 + (ulong)uVar11 * 4) = (uVar6 & 0xff) << 8 | uVar5 & 0xff | 0xff000000
      ;
      uVar11 = uVar11 + (int)param_3;
    } while (iVar13 != iVar8);
    param_3 = param_3 & 0xffffffff;
    iVar13 = iVar13 + -0xc;
    uVar10 = uVar10 + 1;
  } while (uVar10 != 4);
  return;
}



/* DecodeRGBBlock(void const*, void*, unsigned long) */

void DecodeRGBBlock(void *param_1,void *param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  long in_FS_OFFSET;
  uint local_a8;
  uint local_70 [4];
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
                    /* WARNING: Load size is inaccurate */
  uVar26 = (uint)*param_1;
  uVar17 = uVar26 >> 0x18;
  uVar29 = uVar17 | (uVar26 & 0xff0000) >> 8;
  uVar30 = uVar29 | (uVar26 & 0xff00) << 8;
  uVar26 = uVar26 << 0x18;
  uVar11 = uVar30 | uVar26;
  uVar20 = (uint)((ulong)*param_1 >> 0x20);
  uVar12 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8;
  uVar28 = uVar12 | (uVar20 & 0xff00) << 8;
  uVar13 = uVar20 << 0x18;
  uVar6 = uVar28 | uVar13;
  uVar7 = CONCAT44(uVar6,uVar11);
  iVar31 = (int)param_3;
  uVar19 = (uint)(uVar7 >> 8);
  uVar25 = (uint)(uVar7 >> 0x10);
  uVar16 = (uint)(uVar7 >> 0x18);
  if ((uVar17 & 2) == 0) {
    uVar30 = uVar26 >> 0x1c | uVar16 & 0xf0;
    uVar28 = (uint)(uVar7 >> 0x14);
    uVar29 = uVar25 & 0xf0 | uVar28 & 0xf;
    local_70[1] = uVar28 & 0xf0 | uVar16 & 0xf;
    uVar28 = (uint)(uVar7 >> 0xc);
    local_70[3] = uVar28 & 0xf0 | uVar25 & 0xf;
    uVar28 = uVar19 & 0xf0 | uVar28 & 0xf;
    local_5c = (uint)(uVar7 >> 4) & 0xf0 | uVar19 & 0xf;
  }
  else {
    uVar8 = ((int)(uVar11 << 5) >> 0x1d) + (uVar26 >> 0x1b);
    uVar27 = (uint)(uVar7 >> 0x1b);
    if (0x1f < uVar8) {
      uVar27 = uVar27 & 3;
      local_a8 = uVar27 << 6 | (uVar16 & 3) << 4 | uVar16 & 3 | uVar27 << 2;
      bVar1 = *(byte *)((long)&table59T58H + (ulong)((uint)(uVar7 >> 1) & 6 | uVar17 & 1));
      uVar29 = ((uint)(uVar7 >> 0xc) & 0xf) * 0x11;
      uVar30 = bVar1 + uVar29;
      if (0xff < bVar1 + uVar29) {
        uVar30 = 0xff;
      }
      iVar10 = (uVar19 & 0xf) * 0x11;
      uVar17 = (uint)bVar1 + iVar10;
      if (0xff < uVar17) {
        uVar17 = 0xff;
      }
      uVar12 = (uint)(uVar7 >> 4) & 0xf;
      iVar22 = uVar12 * 0x11;
      uVar28 = (uint)bVar1 + iVar22;
      if (0xff < uVar28) {
        uVar28 = 0xff;
      }
      uVar26 = uVar29 - bVar1;
      if (0xff < uVar26) {
        uVar26 = 0;
      }
      uVar20 = iVar10 - (uint)bVar1;
      uVar13 = 0;
      if (uVar20 < 0x100) {
        uVar13 = uVar20 * 0x100;
      }
      uVar11 = iVar22 - (uint)bVar1;
      uVar20 = uVar11 * 0x10000 | uVar26;
      if (0xff < uVar11) {
        uVar20 = uVar26;
      }
      uVar11 = 0;
      uVar26 = 4;
      local_58 = CONCAT44(uVar17 << 8 | uVar28 << 0x10 | uVar30,
                          ((uint)(uVar7 >> 0x14) & 0xf) * 0x1100 | (uVar25 & 0xf) * 0x110000 |
                          local_a8) | 0xff000000ff000000;
      uStack_50 = CONCAT44(uVar13 | uVar20,(uVar19 & 0xf) * 0x1100 | uVar12 * 0x110000 | uVar29) |
                  0xff000000ff000000;
      do {
        uVar29 = uVar26 - 4;
        uVar30 = uVar11;
        do {
          uVar7 = (ulong)uVar29;
          cVar5 = (char)uVar30;
          uVar17 = uVar30 & 0x1f;
          uVar29 = uVar29 + 1;
          uVar30 = uVar30 + 4;
          *(undefined4 *)((long)param_2 + uVar7 * 4) =
               *(undefined4 *)
                ((long)&local_58 +
                (ulong)((uVar6 >> (cVar5 + 0x10U & 0x1f)) * 2 & 2 |
                       (uint)((uVar6 >> uVar17 & 1) != 0)) * 4);
        } while (uVar29 != uVar26);
        uVar11 = uVar11 + 1;
        uVar26 = uVar26 + iVar31;
      } while (uVar11 != 4);
      goto LAB_0010065f;
    }
    uVar25 = (uint)(uVar7 >> 0x13) & 0x1f;
    uVar19 = ((int)(uVar30 << 0xd) >> 0x1d) + uVar25;
    uVar16 = (uint)(uVar7 >> 0xb);
    if (0x1f < uVar19) {
      uVar30 = (uint)(uVar7 >> 0xf) & 7 | (uint)((uVar7 >> 0x13) << 3) & 8;
      uVar28 = (uint)(uVar7 >> 3);
      uVar27 = uVar27 & 0xf;
      iVar24 = ((uint)(uVar7 >> 7) & 0xf) * 0x11;
      uVar29 = (uint)(uVar7 >> 0x17) & 0xe | (uint)(uVar7 >> 0x14) & 1;
      iVar3 = (uVar28 & 0xf) * 0x11;
      iVar4 = (uVar16 & 0xf) * 0x11;
      iVar10 = uVar29 * 0x11;
      bVar1 = *(byte *)((long)&table59T58H +
                       ((ulong)(uVar17 & 4 | uVar11 * 2 & 2) |
                       (ulong)((ulong)(uVar28 & 0xfff) <=
                              ((ulong)uVar27 << 8 | (ulong)uVar30 | (ulong)uVar29 * 0x10))));
      iVar22 = uVar30 * 0x11;
      iVar21 = uVar27 * 0x11;
      uVar30 = (uint)bVar1 + iVar10;
      if (0xff < uVar30) {
        uVar30 = 0xff;
      }
      uVar29 = (uint)bVar1 + iVar22;
      if (0xff < uVar29) {
        uVar29 = 0xff;
      }
      uVar17 = (uint)bVar1 + iVar21;
      if (0xff < uVar17) {
        uVar17 = 0xff;
      }
      uVar28 = iVar21 - (uint)bVar1;
      if (0xff < uVar28) {
        uVar28 = 0;
      }
      uVar26 = iVar10 - (uint)bVar1;
      uVar12 = uVar26 * 0x100 | uVar28;
      if (0xff < uVar26) {
        uVar12 = uVar28;
      }
      uVar28 = (uint)bVar1;
      uVar26 = iVar22 - uVar28;
      if (uVar26 < 0x100) {
        uVar12 = uVar26 * 0x10000 | uVar12;
      }
      local_58 = CONCAT44(uVar12,uVar30 << 8 | uVar29 << 0x10 | uVar17);
      uVar30 = (uint)bVar1 + iVar24;
      if (0xff < uVar30) {
        uVar30 = 0xff;
      }
      uVar29 = (uint)bVar1 + iVar3;
      if (0xff < uVar29) {
        uVar29 = 0xff;
      }
      uVar17 = (uint)bVar1 + iVar4;
      if (0xff < uVar17) {
        uVar17 = 0xff;
      }
      uVar12 = iVar4 - uVar28;
      if (0xff < uVar12) {
        uVar12 = 0;
      }
      uVar26 = iVar24 - uVar28;
      uVar13 = 4;
      if (uVar26 < 0x100) {
        uVar12 = uVar26 * 0x100 | uVar12;
      }
      uVar28 = iVar3 - uVar28;
      if (uVar28 < 0x100) {
        uVar12 = uVar28 * 0x10000 | uVar12;
      }
      uVar28 = 0;
      uStack_50 = CONCAT44(uVar12,uVar30 << 8 | uVar29 << 0x10 | uVar17);
      do {
        uVar29 = uVar13 - 4;
        uVar30 = uVar28;
        do {
          uVar7 = (ulong)uVar29;
          cVar5 = (char)uVar30;
          uVar17 = uVar30 & 0x1f;
          uVar29 = uVar29 + 1;
          uVar30 = uVar30 + 4;
          *(uint *)((long)param_2 + uVar7 * 4) =
               *(uint *)((long)&local_58 +
                        (ulong)((uVar6 >> (cVar5 + 0x10U & 0x1f)) * 2 & 2 |
                               (uint)((uVar6 >> uVar17 & 1) != 0)) * 4) | 0xff000000;
        } while (uVar29 != uVar13);
        uVar28 = uVar28 + 1;
        uVar13 = uVar13 + iVar31;
      } while (uVar28 != 4);
      goto LAB_0010065f;
    }
    uVar16 = uVar16 & 0x1f;
    uVar11 = ((int)(uVar29 << 0x15) >> 0x1d) + uVar16;
    if (0x1f < uVar11) {
      uVar16 = (uint)(uVar7 >> 1) & 0x3e;
      uVar26 = (uint)(uVar7 >> 0xb) & 0x20 | (uint)((uVar7 >> 0xb) << 3) & 0x18;
      uVar29 = (uint)(uVar7 >> 0x12) & 0x40;
      uVar30 = uVar20 >> 0x18 & 0x3f;
      uVar20 = uVar6 >> 0x13 & 0x3f;
      uVar6 = (uVar26 | (uint)(uVar7 >> 7) & 7) * 4 | uVar26 >> 4;
      uVar28 = uVar28 & 0x7e000;
      uVar11 = (uVar29 | (uint)(uVar7 >> 0x11) & 0x3f) * 2 | uVar29 >> 6;
      uVar29 = (uint)(uVar7 >> 0x19) & 0x3f;
      uVar29 = uVar29 * 4 | uVar29 >> 4;
      iVar21 = 0;
      iVar10 = 4;
      uVar26 = 4;
      iVar22 = 0;
      iVar24 = 0;
      do {
        uVar25 = uVar26 - 4;
        uVar19 = uVar29 * 4 + 2 + iVar22;
        uVar27 = uVar11 * 4 + 2 + iVar24;
        uVar8 = uVar6 * 4 + 2 + iVar21;
        do {
          uVar7 = (ulong)uVar25;
          uVar14 = (int)uVar27 >> 2;
          uVar9 = (int)uVar19 >> 2;
          uVar23 = (int)uVar8 >> 2;
          if ((uint)((int)(uVar27 | uVar19 | uVar8) >> 2) < 0x100) {
            uVar9 = uVar23 << 0x10 | uVar14 << 8 | uVar9;
          }
          else {
            uVar2 = (int)~uVar9 >> 0x1f;
            if (uVar9 < 0x100) {
              uVar2 = uVar9;
            }
            uVar9 = (int)~uVar14 >> 0x1f;
            if (uVar14 < 0x100) {
              uVar9 = uVar14;
            }
            uVar14 = (int)~uVar23 >> 0x1f;
            if (uVar23 < 0x100) {
              uVar14 = uVar23;
            }
            uVar9 = uVar2 & 0xff | (uVar14 & 0xff) << 0x10 | (uVar9 & 0xff) << 8;
          }
          uVar25 = uVar25 + 1;
          *(uint *)((long)param_2 + uVar7 * 4) = uVar9 | 0xff000000;
          uVar19 = uVar19 + (((uVar16 | uVar17 & 1) * 4 | uVar16 >> 4) - uVar29);
          uVar27 = uVar27 + (((uVar13 >> 0x19) * 2 | uVar13 >> 0x1f) - uVar11);
          uVar8 = uVar8 + ((uVar20 * 4 | uVar20 >> 4) - uVar6);
        } while (uVar25 != uVar26);
        uVar26 = uVar26 + iVar31;
        iVar22 = iVar22 + ((uVar28 >> 0x11 | (uVar28 >> 0xd) * 4) - uVar29);
        iVar24 = iVar24 + (((uVar12 & 0x1fc0) >> 0xc | ((uVar12 & 0x1fc0) >> 6) * 2) - uVar11);
        iVar21 = iVar21 + ((uVar30 * 4 | uVar30 >> 4) - uVar6);
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      goto LAB_0010065f;
    }
    uVar30 = (uVar26 >> 0x1b) * 8 | uVar26 >> 0x1d;
    local_70[1] = uVar8 * 8 | (int)uVar8 >> 2;
    uVar29 = uVar25 * 8 | uVar25 >> 2;
    local_70[3] = uVar19 * 8 | (int)uVar19 >> 2;
    uVar28 = uVar16 * 8 | uVar16 >> 2;
    local_5c = uVar11 * 8 | (int)uVar11 >> 2;
  }
  uVar13 = (uint)(uVar7 >> 5);
  uVar26 = uVar13 & 7;
  local_70[0] = uVar30;
  local_70[2] = uVar29;
  local_60 = uVar28;
  uVar12 = (uVar12 << 8 | uVar12) & 0xff00ff;
  local_58 = CONCAT44((int)(uVar7 >> 2),uVar13) & 0x700000007;
  uVar12 = (uVar12 << 4 | uVar12) & 0xf0f0f0f;
  uVar13 = (uVar12 * 4 | uVar12) & 0x33333333;
  uVar12 = ((uVar6 >> 0x10) << 8 | uVar6 >> 0x10) & 0xff00ff;
  uVar12 = (uVar12 << 4 | uVar12) & 0xf0f0f0f;
  uVar12 = (uVar12 * 4 | uVar12) & 0x33333333;
  uVar7 = (ulong)((uVar12 * 2 | uVar12) * 2 & 0xaaaaaaaa | (uVar13 * 2 | uVar13) & 0x55555555);
  if ((uVar17 & 1) == 0) {
    uVar15 = 0;
    while( true ) {
      iVar10 = (int)uVar15;
      iVar22 = 4;
      do {
        iVar21 = *(int *)(&g_table + (ulong)uVar26 * 0x10 + (ulong)((uint)uVar7 & 3) * 4);
        uVar17 = iVar21 + uVar29;
        uVar12 = iVar21 + uVar30;
        uVar13 = iVar21 + uVar28;
        if ((uVar17 | uVar12 | uVar13) < 0x100) {
          uVar12 = uVar17 * 0x100 | uVar13 * 0x10000 | uVar12;
        }
        else {
          uVar6 = (int)~uVar12 >> 0x1f;
          if (uVar12 < 0x100) {
            uVar6 = uVar12;
          }
          uVar12 = (int)~uVar17 >> 0x1f;
          if (uVar17 < 0x100) {
            uVar12 = uVar17;
          }
          uVar17 = (int)~uVar13 >> 0x1f;
          if (uVar13 < 0x100) {
            uVar17 = uVar13;
          }
          uVar12 = (uVar17 & 0xff) << 0x10 | uVar6 & 0xff | (uVar12 & 0xff) << 8;
        }
        *(uint *)((long)param_2 + uVar15 * 4) = uVar12 | 0xff000000;
        uVar7 = uVar7 >> 2;
        uVar15 = (ulong)(uint)((int)uVar15 + iVar31);
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      uVar30 = iVar10 + 1;
      uVar15 = (ulong)uVar30;
      if (uVar30 == 4) break;
      lVar18 = (long)((int)uVar30 >> 1);
      uVar26 = *(uint *)((long)&local_58 + lVar18 * 4);
      uVar30 = local_70[lVar18];
      uVar29 = local_70[lVar18 + 2];
      uVar28 = local_70[lVar18 + 4];
    }
  }
  else {
    uVar15 = 0;
    do {
      iVar10 = (int)uVar15;
      iVar22 = 0;
      uVar13 = uVar29;
      uVar12 = uVar30;
      uVar17 = uVar26;
      uVar6 = uVar28;
      while( true ) {
        iVar21 = *(int *)(&g_table + ((ulong)((uint)uVar7 & 3) + (ulong)uVar17 * 4) * 4);
        uVar12 = iVar21 + uVar12;
        uVar13 = uVar13 + iVar21;
        uVar6 = uVar6 + iVar21;
        if ((uVar12 | uVar13 | uVar6) < 0x100) {
          uVar12 = uVar13 * 0x100 | uVar6 * 0x10000 | uVar12;
        }
        else {
          uVar17 = (int)~uVar12 >> 0x1f;
          if (uVar12 < 0x100) {
            uVar17 = uVar12;
          }
          if (0xff < uVar13) {
            uVar13 = (int)~uVar13 >> 0x1f;
          }
          uVar12 = (int)~uVar6 >> 0x1f;
          if (uVar6 < 0x100) {
            uVar12 = uVar6;
          }
          uVar12 = (uVar13 & 0xff) << 8 | (uVar12 & 0xff) << 0x10 | uVar17 & 0xff;
        }
        iVar22 = iVar22 + 1;
        *(uint *)((long)param_2 + uVar15 * 4) = uVar12 | 0xff000000;
        uVar7 = uVar7 >> 2;
        uVar15 = (ulong)(uint)((int)uVar15 + iVar31);
        if (iVar22 == 4) break;
        lVar18 = (long)(iVar22 >> 1);
        uVar17 = *(uint *)((long)&local_58 + lVar18 * 4);
        uVar12 = local_70[lVar18];
        uVar13 = local_70[lVar18 + 2];
        uVar6 = local_70[lVar18 + 4];
      }
      uVar17 = iVar10 + 1;
      uVar15 = (ulong)uVar17;
    } while (uVar17 != 4);
  }
LAB_0010065f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DecodeRGBABlock(void const*, void*, unsigned long) */

void DecodeRGBABlock(void *param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  byte bVar35;
  uint uVar36;
  long in_FS_OFFSET;
  uint local_c0;
  uint local_a0;
  uint local_70 [4];
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
                    /* WARNING: Load size is inaccurate */
  uVar6 = *param_1;
  uVar19 = (uint)uVar6 & 0xff;
  uVar27 = (uint)(uVar6 >> 0xc) & 0xf;
  uVar34 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
           (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
           (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar15 = (int)param_3;
  uVar14 = (ulong)((uint)(uVar6 >> 3) & 0x1e0);
  uVar24 = (uint)*(undefined8 *)((long)param_1 + 8);
  uVar5 = uVar24 >> 0x18;
  uVar23 = uVar5 | (uVar24 & 0xff0000) >> 8;
  uVar21 = uVar23 | (uVar24 & 0xff00) << 8;
  uVar24 = uVar24 << 0x18;
  uVar16 = uVar21 | uVar24;
  uVar20 = (uint)((ulong)*(undefined8 *)((long)param_1 + 8) >> 0x20);
  uVar11 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8;
  uVar10 = uVar11 | (uVar20 & 0xff00) << 8;
  uVar32 = uVar20 << 0x18;
  uVar4 = uVar10 | uVar32;
  uVar6 = CONCAT44(uVar4,uVar16);
  uVar36 = (uint)(uVar6 >> 8);
  uVar28 = (uint)(uVar6 >> 0x10);
  uVar29 = (uint)(uVar6 >> 0x18);
  if ((uVar5 & 2) == 0) {
    local_c0 = uVar24 >> 0x1c | uVar29 & 0xf0;
    uVar23 = (uint)(uVar6 >> 0x14);
    local_70[1] = uVar23 & 0xf0 | uVar29 & 0xf;
    uVar23 = uVar28 & 0xf0 | uVar23 & 0xf;
    uVar21 = (uint)(uVar6 >> 0xc);
    local_70[3] = uVar21 & 0xf0 | uVar28 & 0xf;
    local_a0 = uVar36 & 0xf0 | uVar21 & 0xf;
    local_5c = (uint)(uVar6 >> 4) & 0xf0 | uVar36 & 0xf;
  }
  else {
    uVar9 = ((int)(uVar16 << 5) >> 0x1d) + (uVar24 >> 0x1b);
    uVar31 = (uint)(uVar6 >> 0x1b);
    if (0x1f < uVar9) {
      uVar31 = uVar31 & 3;
      bVar35 = *(byte *)((long)&table59T58H + (ulong)((uint)(uVar6 >> 1) & 6 | uVar5 & 1));
      uVar23 = ((uint)(uVar6 >> 0xc) & 0xf) * 0x11;
      uVar5 = bVar35 + uVar23;
      if (0xff < bVar35 + uVar23) {
        uVar5 = 0xff;
      }
      iVar30 = (uVar36 & 0xf) * 0x11;
      uVar21 = (uint)bVar35 + iVar30;
      if (0xff < uVar21) {
        uVar21 = 0xff;
      }
      uVar11 = (uint)(uVar6 >> 4) & 0xf;
      iVar12 = uVar11 * 0x11;
      uVar10 = (uint)bVar35 + iVar12;
      if (0xff < uVar10) {
        uVar10 = 0xff;
      }
      uVar24 = uVar23 - bVar35;
      if (0xff < uVar24) {
        uVar24 = 0;
      }
      uVar20 = iVar30 - (uint)bVar35;
      uVar32 = uVar20 * 0x100 | uVar24;
      if (0xff < uVar20) {
        uVar32 = uVar24;
      }
      uVar24 = iVar12 - (uint)bVar35;
      if (uVar24 < 0x100) {
        uVar32 = uVar24 * 0x10000 | uVar32;
      }
      uVar24 = 0;
      uVar20 = 4;
      local_58 = CONCAT44(uVar21 << 8 | uVar10 << 0x10 | uVar5,
                          ((uint)(uVar6 >> 0x14) & 0xf) * 0x1100 | (uVar28 & 0xf) * 0x110000 |
                          uVar31 << 6 | (uVar29 & 3) << 4 | uVar29 & 3 | uVar31 << 2);
      uStack_50 = CONCAT44(uVar32,(uVar36 & 0xf) * 0x1100 | uVar11 * 0x110000 | uVar23);
      do {
        uVar23 = uVar20 - 4;
        uVar5 = uVar24;
        do {
          uVar6 = (ulong)uVar23;
          cVar2 = (char)uVar5;
          uVar21 = uVar5 & 0x1f;
          uVar11 = *(int *)(&g_alpha +
                           uVar14 + (ulong)((uint)(uVar34 >> (cVar2 * -3 + 0x2dU & 0x3f)) & 7) * 4)
                   * uVar27 + uVar19;
          uVar10 = (int)~uVar11 >> 0x1f;
          if (uVar11 < 0x100) {
            uVar10 = uVar11;
          }
          uVar23 = uVar23 + 1;
          uVar5 = uVar5 + 4;
          *(uint *)((long)param_2 + uVar6 * 4) =
               uVar10 << 0x18 |
               *(uint *)((long)&local_58 +
                        (ulong)((uVar4 >> (cVar2 + 0x10U & 0x1f)) * 2 & 2 |
                               (uint)((uVar4 >> uVar21 & 1) != 0)) * 4);
        } while (uVar20 != uVar23);
        uVar24 = uVar24 + 1;
        uVar20 = uVar20 + iVar15;
      } while (uVar24 != 4);
      goto LAB_00101269;
    }
    uVar36 = (uint)(uVar6 >> 0x13);
    uVar28 = uVar36 & 0x1f;
    uVar21 = ((int)(uVar21 << 0xd) >> 0x1d) + uVar28;
    uVar29 = (uint)(uVar6 >> 0xb);
    if (0x1f < uVar21) {
      uVar31 = uVar31 & 0xf;
      uVar23 = (uint)(uVar6 >> 0x17) & 0xe | (uint)(uVar6 >> 0x14) & 1;
      uVar21 = (uint)(uVar6 >> 0xf) & 7 | uVar36 * 8 & 8;
      iVar26 = (uVar29 & 0xf) * 0x11;
      iVar13 = ((uint)(uVar6 >> 7) & 0xf) * 0x11;
      uVar10 = (uint)(uVar6 >> 3);
      iVar3 = (uVar10 & 0xf) * 0x11;
      iVar30 = uVar23 * 0x11;
      bVar35 = *(byte *)((long)&table59T58H +
                        ((ulong)(uVar16 * 2 & 2 | uVar5 & 4) |
                        (ulong)((ulong)(uVar10 & 0xfff) <=
                               ((ulong)uVar31 << 8 | (ulong)uVar21 | (ulong)uVar23 * 0x10))));
      iVar12 = uVar21 * 0x11;
      iVar18 = uVar31 * 0x11;
      uVar5 = (uint)bVar35 + iVar30;
      if (0xff < uVar5) {
        uVar5 = 0xff;
      }
      uVar23 = (uint)bVar35 + iVar12;
      if (0xff < uVar23) {
        uVar23 = 0xff;
      }
      uVar21 = (uint)bVar35 + iVar18;
      if (0xff < uVar21) {
        uVar21 = 0xff;
      }
      uVar11 = iVar18 - (uint)bVar35;
      uVar10 = 0;
      if (0xff < uVar11) {
        uVar11 = 0;
      }
      uVar32 = iVar30 - (uint)bVar35;
      uVar24 = uVar32 * 0x100 | uVar11;
      if (0xff < uVar32) {
        uVar24 = uVar11;
      }
      uVar11 = (uint)bVar35;
      uVar32 = iVar12 - uVar11;
      if (uVar32 < 0x100) {
        uVar24 = uVar32 * 0x10000 | uVar24;
      }
      uVar32 = (uint)bVar35 + iVar13;
      if (0xff < uVar32) {
        uVar32 = 0xff;
      }
      local_58 = CONCAT44(uVar24,uVar23 << 0x10 | uVar5 << 8 | uVar21);
      uVar23 = 4;
      uVar5 = (uint)bVar35 + iVar3;
      if (0xff < uVar5) {
        uVar5 = 0xff;
      }
      uVar21 = (uint)bVar35 + iVar26;
      if (0xff < uVar21) {
        uVar21 = 0xff;
      }
      uVar24 = iVar26 - uVar11;
      if (0xff < uVar24) {
        uVar24 = 0;
      }
      uVar20 = iVar13 - uVar11;
      if (uVar20 < 0x100) {
        uVar24 = uVar20 * 0x100 | uVar24;
      }
      uVar11 = iVar3 - uVar11;
      if (uVar11 < 0x100) {
        uVar24 = uVar11 * 0x10000 | uVar24;
      }
      uStack_50 = CONCAT44(uVar24,uVar5 << 0x10 | uVar32 << 8 | uVar21);
      do {
        uVar21 = uVar23 - 4;
        uVar5 = uVar10;
        do {
          uVar6 = (ulong)uVar21;
          cVar2 = (char)uVar5;
          uVar11 = uVar5 & 0x1f;
          uVar32 = *(int *)(&g_alpha +
                           uVar14 + (ulong)((uint)(uVar34 >> (cVar2 * -3 + 0x2dU & 0x3f)) & 7) * 4)
                   * uVar27 + uVar19;
          uVar24 = (int)~uVar32 >> 0x1f;
          if (uVar32 < 0x100) {
            uVar24 = uVar32;
          }
          uVar21 = uVar21 + 1;
          uVar5 = uVar5 + 4;
          *(uint *)((long)param_2 + uVar6 * 4) =
               uVar24 << 0x18 |
               *(uint *)((long)&local_58 +
                        (ulong)((uVar4 >> (cVar2 + 0x10U & 0x1f)) * 2 & 2 |
                               (uint)((uVar4 >> uVar11 & 1) != 0)) * 4);
        } while (uVar23 != uVar21);
        uVar10 = uVar10 + 1;
        uVar23 = uVar23 + iVar15;
      } while (uVar10 != 4);
      goto LAB_00101269;
    }
    uVar29 = uVar29 & 0x1f;
    uVar16 = ((int)(uVar23 << 0x15) >> 0x1d) + uVar29;
    if (0x1f < uVar16) {
      uVar16 = (uint)(uVar6 >> 1) & 0x3e;
      uVar29 = (uint)(uVar6 >> 0x12) & 0x40;
      uVar23 = uVar20 >> 0x18 & 0x3f;
      uVar36 = 4;
      uVar21 = (uint)((uVar6 >> 0xb) << 3) & 0x18 | (uint)(uVar6 >> 0xb) & 0x20;
      uVar10 = uVar10 & 0x7e000;
      uVar4 = uVar4 >> 0x13 & 0x3f;
      uVar24 = (uVar21 | (uint)(uVar6 >> 7) & 7) * 4 | uVar21 >> 4;
      uVar21 = (uint)(uVar6 >> 0x19) & 0x3f;
      uVar20 = ((uint)(uVar6 >> 0x11) & 0x3f | uVar29) * 2 | uVar29 >> 6;
      uVar21 = uVar21 * 4 | uVar21 >> 4;
      iVar26 = 0;
      iVar18 = 0;
      iVar30 = 0x2d;
      iVar12 = 0;
      do {
        uVar9 = uVar36 - 4;
        uVar29 = uVar21 * 4 + 2 + iVar12;
        uVar31 = uVar24 * 4 + 2 + iVar18;
        uVar28 = uVar20 * 4 + 2 + iVar26;
        iVar13 = iVar30;
        do {
          uVar33 = (int)uVar29 >> 2;
          uVar25 = (int)uVar28 >> 2;
          uVar17 = (int)uVar31 >> 2;
          uVar22 = *(int *)(&g_alpha +
                           uVar14 + (ulong)((uint)(uVar34 >> ((byte)iVar13 & 0x3f)) & 7) * 4) *
                   uVar27 + uVar19;
          uVar1 = (int)~uVar22 >> 0x1f;
          if (uVar22 < 0x100) {
            uVar1 = uVar22;
          }
          if ((uint)((int)(uVar28 | uVar29 | uVar31) >> 2) < 0x100) {
            uVar33 = uVar17 << 0x10 | uVar25 << 8 | uVar33;
          }
          else {
            uVar22 = (int)~uVar33 >> 0x1f;
            if (uVar33 < 0x100) {
              uVar22 = uVar33;
            }
            uVar33 = (int)~uVar25 >> 0x1f;
            if (uVar25 < 0x100) {
              uVar33 = uVar25;
            }
            uVar25 = (int)~uVar17 >> 0x1f;
            if (uVar17 < 0x100) {
              uVar25 = uVar17;
            }
            uVar33 = uVar22 & 0xff | (uVar33 & 0xff) << 8 | (uVar25 & 0xff) << 0x10;
          }
          *(uint *)((long)param_2 + (ulong)uVar9 * 4) = uVar1 << 0x18 | uVar33;
          uVar9 = uVar9 + 1;
          iVar13 = iVar13 + -0xc;
          uVar29 = uVar29 + (((uVar16 | uVar5 & 1) * 4 | uVar16 >> 4) - uVar21);
          uVar28 = uVar28 + (((uVar32 >> 0x19) * 2 | uVar32 >> 0x1f) - uVar20);
          uVar31 = uVar31 + ((uVar4 * 4 | uVar4 >> 4) - uVar24);
        } while (uVar9 != uVar36);
        uVar36 = uVar36 + iVar15;
        iVar30 = iVar30 + -3;
        iVar12 = iVar12 + (((uVar10 >> 0xd) * 4 | uVar10 >> 0x11) - uVar21);
        iVar26 = iVar26 + ((((uVar11 & 0x1fc0) >> 6) * 2 | (uVar11 & 0x1fc0) >> 0xc) - uVar20);
        iVar18 = iVar18 + ((uVar23 * 4 | uVar23 >> 4) - uVar24);
      } while (iVar30 != 0x21);
      goto LAB_00101269;
    }
    local_c0 = (uVar24 >> 0x1b) * 8 | uVar24 >> 0x1d;
    local_70[1] = (int)uVar9 >> 2 | uVar9 * 8;
    uVar23 = uVar28 * 8 | uVar28 >> 2;
    local_70[3] = (int)uVar21 >> 2 | uVar21 * 8;
    local_a0 = uVar29 * 8 | uVar29 >> 2;
    local_5c = (int)uVar16 >> 2 | uVar16 * 8;
  }
  uVar10 = (uint)(uVar6 >> 5);
  uVar21 = uVar10 & 7;
  local_70[0] = local_c0;
  local_70[2] = uVar23;
  local_60 = local_a0;
  local_58 = CONCAT44((int)(uVar6 >> 2),uVar10) & 0x700000007;
  uVar10 = (uVar11 << 8 | uVar11) & 0xff00ff;
  uVar10 = (uVar10 << 4 | uVar10) & 0xf0f0f0f;
  uVar10 = (uVar10 * 4 | uVar10) & 0x33333333;
  uVar11 = ((uVar4 >> 0x10) << 8 | uVar4 >> 0x10) & 0xff00ff;
  uVar11 = (uVar11 << 4 | uVar11) & 0xf0f0f0f;
  uVar11 = (uVar11 * 4 | uVar11) & 0x33333333;
  uVar6 = (ulong)((uVar11 * 2 | uVar11) * 2 & 0xaaaaaaaa | (uVar10 * 2 | uVar10) & 0x55555555);
  if ((uVar5 & 1) == 0) {
    uVar5 = 0;
    iVar30 = 0x21;
    while( true ) {
      iVar12 = iVar30 + 0xc;
      uVar10 = uVar5;
      do {
        iVar18 = *(int *)(&g_table + (ulong)uVar21 * 0x10 + (ulong)((uint)uVar6 & 3) * 4);
        uVar11 = iVar18 + local_c0;
        uVar24 = iVar18 + uVar23;
        uVar20 = iVar18 + local_a0;
        uVar4 = *(int *)(&g_alpha +
                        uVar14 + (ulong)((uint)(uVar34 >> ((byte)iVar12 & 0x3f)) & 7) * 4) * uVar27
                + uVar19;
        uVar32 = (int)~uVar4 >> 0x1f;
        if (uVar4 < 0x100) {
          uVar32 = uVar4;
        }
        if ((uVar11 | uVar24 | uVar20) < 0x100) {
          uVar11 = uVar24 * 0x100 | uVar20 * 0x10000 | uVar11;
        }
        else {
          uVar4 = (int)~uVar11 >> 0x1f;
          if (uVar11 < 0x100) {
            uVar4 = uVar11;
          }
          uVar11 = (int)~uVar24 >> 0x1f;
          if (uVar24 < 0x100) {
            uVar11 = uVar24;
          }
          uVar24 = (int)~uVar20 >> 0x1f;
          if (uVar20 < 0x100) {
            uVar24 = uVar20;
          }
          uVar11 = uVar4 & 0xff | (uVar11 & 0xff) << 8 | (uVar24 & 0xff) << 0x10;
        }
        *(uint *)((long)param_2 + (ulong)uVar10 * 4) = uVar32 << 0x18 | uVar11;
        iVar12 = iVar12 + -3;
        uVar6 = uVar6 >> 2;
        uVar10 = uVar10 + iVar15;
      } while (iVar30 != iVar12);
      iVar30 = iVar30 + -0xc;
      uVar5 = uVar5 + 1;
      if (uVar5 == 4) break;
      lVar7 = (long)((int)uVar5 >> 1);
      local_c0 = local_70[lVar7];
      uVar21 = *(uint *)((long)&local_58 + lVar7 * 4);
      uVar23 = local_70[lVar7 + 2];
      local_a0 = local_70[lVar7 + 4];
    }
  }
  else {
    bVar35 = 0x2d;
    uVar5 = 0;
    do {
      iVar30 = 0;
      uVar32 = local_a0;
      uVar24 = uVar23;
      uVar11 = uVar21;
      uVar10 = local_c0;
      uVar20 = uVar5;
      bVar8 = bVar35;
      while( true ) {
        iVar12 = *(int *)(&g_table + ((ulong)((uint)uVar6 & 3) + (ulong)uVar11 * 4) * 4);
        uVar10 = iVar12 + uVar10;
        uVar24 = uVar24 + iVar12;
        uVar32 = uVar32 + iVar12;
        uVar4 = *(int *)(&g_alpha + uVar14 + (ulong)((uint)(uVar34 >> (bVar8 & 0x3f)) & 7) * 4) *
                uVar27 + uVar19;
        uVar11 = (int)~uVar4 >> 0x1f;
        if (uVar4 < 0x100) {
          uVar11 = uVar4;
        }
        if ((uVar10 | uVar24 | uVar32) < 0x100) {
          uVar10 = uVar24 * 0x100 | uVar32 * 0x10000 | uVar10;
        }
        else {
          uVar4 = (int)~uVar10 >> 0x1f;
          if (uVar10 < 0x100) {
            uVar4 = uVar10;
          }
          if (0xff < uVar24) {
            uVar24 = (int)~uVar24 >> 0x1f;
          }
          uVar10 = (int)~uVar32 >> 0x1f;
          if (uVar32 < 0x100) {
            uVar10 = uVar32;
          }
          uVar10 = uVar4 & 0xff | (uVar24 & 0xff) << 8 | (uVar10 & 0xff) << 0x10;
        }
        iVar30 = iVar30 + 1;
        *(uint *)((long)param_2 + (ulong)uVar20 * 4) = uVar11 << 0x18 | uVar10;
        uVar6 = uVar6 >> 2;
        bVar8 = bVar8 - 3;
        uVar20 = uVar20 + iVar15;
        if (iVar30 == 4) break;
        lVar7 = (long)(iVar30 >> 1);
        uVar11 = *(uint *)((long)&local_58 + lVar7 * 4);
        uVar10 = local_70[lVar7];
        uVar24 = local_70[lVar7 + 2];
        uVar32 = local_70[lVar7 + 4];
      }
      uVar5 = uVar5 + 1;
      bVar35 = bVar35 - 0xc;
    } while (uVar5 != 4);
  }
LAB_00101269:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


