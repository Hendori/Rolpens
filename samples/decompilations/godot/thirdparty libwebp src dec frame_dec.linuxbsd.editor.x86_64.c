
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Dither8x8(int *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  char local_78 [64];
  char local_38 [8];
  long local_30;
  
  iVar4 = param_1[1];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar5 = local_78;
  iVar2 = *param_1;
  do {
    iVar1 = param_1[(long)iVar2 + 2] - param_1[(long)iVar4 + 2];
    if (iVar1 < 0) {
      iVar1 = iVar1 + -0x80000000;
    }
    iVar3 = iVar2 + 1;
    if (iVar2 + 1 == 0x37) {
      iVar3 = 0;
    }
    iVar4 = iVar4 + 1;
    param_1[(long)iVar2 + 2] = iVar1;
    if (iVar4 == 0x37) {
      iVar4 = 0;
    }
    pcVar6 = pcVar5 + 1;
    *pcVar5 = (char)((uint)((iVar1 * 2 >> 0x18) * param_4) >> 8) + -0x80;
    pcVar5 = pcVar6;
    iVar2 = iVar3;
  } while (local_38 != pcVar6);
  param_1[1] = iVar4;
  *param_1 = iVar3;
  (*_VP8DitherCombine8x8)(local_78,param_2,param_3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ReconstructRow(long param_1,int *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  ushort *puVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  
  lVar6 = *(long *)(param_1 + 0xb20);
  iVar4 = *param_2;
  iVar5 = param_2[1];
  lVar1 = lVar6 + 0x28;
  puVar2 = (undefined8 *)(lVar6 + 0x248);
  puVar13 = (undefined1 *)(lVar6 + 0x27);
  do {
    *puVar13 = 0x81;
    puVar12 = puVar13 + 0x40;
    puVar13[0x20] = 0x81;
    puVar13 = puVar12;
  } while ((undefined1 *)(lVar6 + 0x227) != puVar12);
  puVar13 = (undefined1 *)(lVar6 + 0x247);
  do {
    *puVar13 = 0x81;
    puVar12 = puVar13 + 0x20;
    puVar13[0x10] = 0x81;
    uVar9 = _UNK_00101ae8;
    uVar8 = __LC0;
    puVar13 = puVar12;
  } while ((undefined1 *)(lVar6 + 0x347) != puVar12);
  if (iVar5 < 1) {
    *(undefined8 *)(lVar6 + 0x227) = 0x7f7f7f7f7f7f7f7f;
    *(undefined8 *)(lVar6 + 7) = uVar8;
    *(undefined8 *)(lVar6 + 0xf) = uVar9;
    *(undefined8 *)(lVar6 + 0x14) = 0x7f7f7f7f7f7f7f7f;
    *(undefined1 *)(lVar6 + 0x22f) = 0x7f;
    *(undefined8 *)(lVar6 + 0x237) = 0x7f7f7f7f7f7f7f7f;
    *(undefined1 *)(lVar6 + 0x23f) = 0x7f;
  }
  else {
    *(undefined1 *)(lVar6 + 0x237) = 0x81;
    *(undefined1 *)(lVar6 + 0x227) = 0x81;
    *(undefined1 *)(lVar6 + 7) = 0x81;
  }
  if (0 < *(int *)(param_1 + 0x198)) {
    lVar26 = 0;
    uVar10 = (uint)(iVar5 == 0) << 2;
    do {
      lVar19 = lVar26 * 800 + *(long *)(param_2 + 6);
      if (lVar26 != 0) {
        puVar15 = (undefined4 *)(lVar6 + 4);
        do {
          puVar16 = puVar15 + 8;
          *puVar15 = puVar15[4];
          puVar15 = puVar16;
        } while (puVar16 != (undefined4 *)(lVar6 + 0x224));
        do {
          puVar15 = puVar16 + 8;
          *puVar16 = puVar16[2];
          puVar16[4] = puVar16[6];
          puVar16 = puVar15;
        } while (puVar15 != (undefined4 *)(lVar6 + 0x344));
      }
      puVar25 = (undefined8 *)(lVar26 * 0x20 + *(long *)(param_1 + 0xb08));
      uVar21 = *(uint *)(lVar19 + 0x314);
      if (iVar5 < 1) {
        if (*(char *)(lVar19 + 0x300) != '\0') {
          iVar11 = *(int *)(lVar6 + 0x18);
          goto LAB_001005f8;
        }
        uVar14 = (ulong)*(byte *)(lVar19 + 0x301);
        if (((*(byte *)(lVar19 + 0x301) == 0) && (uVar14 = (ulong)(int)uVar10, lVar26 == 0)) &&
           (uVar14 = 6, iVar5 != 0)) {
LAB_00100488:
          uVar14 = 5;
        }
LAB_00100220:
        (**(code **)(&VP8PredLuma16 + uVar14 * 8))(lVar1);
        if (uVar21 != 0) {
          puVar23 = &kScan;
          lVar24 = lVar19;
          do {
            uVar18 = uVar21 >> 0x1e;
            if (uVar18 == 2) {
              (*_VP8TransformAC3)(lVar24);
            }
            else if (uVar18 == 3) {
              (*_VP8Transform)(lVar24,(ulong)*puVar23 + lVar1,0);
            }
            else if (uVar18 == 1) {
              (*_VP8TransformDC)(lVar24);
            }
            puVar23 = puVar23 + 1;
            uVar21 = uVar21 << 2;
            lVar24 = lVar24 + 0x20;
          } while (puVar23 != (ushort *)&_LC0);
        }
      }
      else {
        uVar8 = puVar25[1];
        *(undefined8 *)(lVar6 + 8) = *puVar25;
        *(undefined8 *)(lVar6 + 0x10) = uVar8;
        *(undefined8 *)(lVar6 + 0x228) = puVar25[2];
        *(undefined8 *)(lVar6 + 0x238) = puVar25[3];
        if (*(char *)(lVar19 + 0x300) == '\0') {
          uVar14 = (ulong)*(byte *)(lVar19 + 0x301);
          if ((*(byte *)(lVar19 + 0x301) == 0) && (lVar26 == 0)) goto LAB_00100488;
          goto LAB_00100220;
        }
        if ((int)lVar26 < *(int *)(param_1 + 0x198) + -1) {
          iVar11 = *(int *)(puVar25 + 4);
          *(int *)(lVar6 + 0x18) = iVar11;
        }
        else {
          iVar11 = (uint)*(byte *)((long)puVar25 + 0xf) * 0x1010101;
          *(int *)(lVar6 + 0x18) = iVar11;
        }
LAB_001005f8:
        lVar24 = 0;
        *(int *)(lVar6 + 0x198) = iVar11;
        *(int *)(lVar6 + 0x118) = iVar11;
        *(int *)(lVar6 + 0x98) = iVar11;
        do {
          while( true ) {
            lVar7 = lVar1 + (ulong)(ushort)(&kScan)[lVar24];
            (**(code **)(&VP8PredLuma4 + (ulong)*(byte *)(lVar19 + 0x301 + lVar24) * 8))(lVar7);
            uVar18 = uVar21 >> 0x1e;
            lVar22 = lVar24 * 0x20 + lVar19;
            if (uVar18 != 2) break;
            (*_VP8TransformAC3)(lVar22,lVar7);
LAB_00100636:
            lVar24 = lVar24 + 1;
            uVar21 = uVar21 << 2;
            if (lVar24 == 0x10) goto LAB_0010024a;
          }
          if (uVar18 != 3) {
            if (uVar18 == 1) {
              (*_VP8TransformDC)(lVar22,lVar7);
            }
            goto LAB_00100636;
          }
          lVar24 = lVar24 + 1;
          uVar21 = uVar21 << 2;
          (*_VP8Transform)(lVar22,lVar7,0);
        } while (lVar24 != 0x10);
      }
LAB_0010024a:
      uVar21 = *(uint *)(lVar19 + 0x318);
      uVar18 = (uint)*(byte *)(lVar19 + 0x311);
      if ((*(byte *)(lVar19 + 0x311) == 0) && (uVar18 = (iVar5 == 0) + 5, lVar26 != 0)) {
        uVar18 = uVar10;
      }
      (**(code **)(&VP8PredChroma8 + (long)(int)uVar18 * 8))(puVar2);
      (**(code **)(&VP8PredChroma8 + (long)(int)uVar18 * 8))(lVar6 + 600);
      if ((char)uVar21 != '\0') {
        if ((uVar21 & 0xaa) == 0) {
          (*_VP8TransformDCUV)(lVar19 + 0x200,puVar2);
        }
        else {
          (*_VP8TransformUV)(lVar19 + 0x200,puVar2);
        }
      }
      if ((char)(uVar21 >> 8) != '\0') {
        if ((uVar21 >> 8 & 0xaa) == 0) {
          (*_VP8TransformDCUV)(lVar19 + 0x280,lVar6 + 600);
        }
        else {
          (*_VP8TransformUV)();
        }
      }
      if (iVar5 < *(int *)(param_1 + 0x19c) + -1) {
        uVar8 = *(undefined8 *)(lVar6 + 0x210);
        *puVar25 = *(undefined8 *)(lVar6 + 0x208);
        puVar25[1] = uVar8;
        puVar25[2] = *(undefined8 *)(lVar6 + 0x328);
        puVar25[3] = *(undefined8 *)(lVar6 + 0x338);
      }
      uVar8 = *(undefined8 *)(lVar6 + 0x30);
      lVar24 = *(long *)(param_1 + 0xb28);
      lVar7 = *(long *)(param_1 + 0xb30);
      lVar22 = *(long *)(param_1 + 0xb38);
      lVar20 = (long)(*(int *)(param_1 + 0xb40) * iVar4 * 0x10) + lVar26 * 0x10;
      iVar11 = *(int *)(param_1 + 0xb44);
      puVar25 = (undefined8 *)(lVar24 + lVar20);
      *puVar25 = *(undefined8 *)(lVar6 + 0x28);
      puVar25[1] = uVar8;
      lVar19 = (long)(iVar11 * iVar4 * 8) + lVar26 * 8;
      iVar11 = 1;
      puVar25 = (undefined8 *)(lVar6 + 0x48);
      do {
        uVar8 = *puVar25;
        uVar9 = puVar25[1];
        puVar25 = puVar25 + 4;
        iVar17 = *(int *)(param_1 + 0xb40) * iVar11;
        iVar11 = iVar11 + 1;
        puVar3 = (undefined8 *)(lVar24 + lVar20 + (long)iVar17);
        *puVar3 = uVar8;
        puVar3[1] = uVar9;
      } while (iVar11 != 0x10);
      iVar11 = 0;
      puVar25 = puVar2;
      do {
        *(undefined8 *)(lVar7 + lVar19 + (long)(*(int *)(param_1 + 0xb44) * iVar11)) = *puVar25;
        iVar17 = *(int *)(param_1 + 0xb44) * iVar11;
        iVar11 = iVar11 + 1;
        *(undefined8 *)(lVar22 + lVar19 + (long)iVar17) = puVar25[2];
        puVar25 = puVar25 + 4;
      } while (iVar11 != 8);
      lVar26 = lVar26 + 1;
    } while ((int)lVar26 < *(int *)(param_1 + 0x198));
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FinishRow(long param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  size_t __n;
  long lVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  size_t __n_00;
  ulong uVar16;
  byte *pbVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  
  iVar5 = *(int *)(param_1 + 0xd8);
  iVar6 = *(int *)(param_1 + 0xdc);
  bVar2 = *(byte *)((long)&kFilterExtraRows + (long)*(int *)(param_1 + 0xb68));
  __n_00 = (size_t)(int)(*(int *)(param_1 + 0xb40) * (uint)bVar2);
  lVar11 = (long)(*(int *)(param_1 + 0xb40) * iVar5 * 0x10);
  lVar19 = (long)(*(int *)(param_1 + 0xb44) * iVar5 * 8);
  __n = (size_t)(((int)(uint)bVar2 >> 1) * *(int *)(param_1 + 0xb44));
  lVar22 = *(long *)(param_1 + 0xb28) + (lVar11 - __n_00);
  lVar23 = *(long *)(param_1 + 0xb30) + (lVar19 - __n);
  lVar12 = (lVar19 - __n) + *(long *)(param_1 + 0xb38);
  iVar1 = *(int *)(param_1 + 0x1ac) + -1;
  if (*(int *)(param_1 + 200) == 2) {
    ReconstructRow(param_1);
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
LAB_0010080b:
    if ((*(int *)(param_1 + 0x338) != 0) &&
       (iVar9 = *(int *)(param_1 + 0x1a0), iVar9 < *(int *)(param_1 + 0x1a8))) {
      lVar20 = (long)iVar9 * 800;
      do {
        lVar21 = *(long *)(param_1 + 0xf0) + lVar20;
        if (3 < *(byte *)(lVar21 + 0x31c)) {
          iVar15 = *(int *)(param_1 + 0xb44);
          lVar14 = *(long *)(param_1 + 0xb38);
          lVar18 = (long)(*(int *)(param_1 + 0xd8) * iVar15 * 8) + (long)(iVar9 * 8);
          Dither8x8(param_1 + 0x33c,lVar18 + *(long *)(param_1 + 0xb30),iVar15);
          Dither8x8(param_1 + 0x33c,lVar14 + lVar18,iVar15,*(undefined1 *)(lVar21 + 0x31c));
        }
        iVar9 = iVar9 + 1;
        lVar20 = lVar20 + 800;
      } while (iVar9 < *(int *)(param_1 + 0x1a8));
    }
  }
  else {
    iVar9 = *(int *)(param_1 + 0xdc);
    iVar15 = *(int *)(param_1 + 0x1a0);
    if (iVar15 < *(int *)(param_1 + 0x1a8)) {
      lVar20 = (long)iVar15 * 4;
      do {
        iVar8 = *(int *)(param_1 + 0xb40);
        pbVar17 = (byte *)(*(long *)(param_1 + 0xe8) + lVar20);
        uVar10 = (uint)*pbVar17;
        bVar4 = pbVar17[1];
        if (uVar10 != 0) {
          lVar21 = *(long *)(param_1 + 0xb28) +
                   (long)(*(int *)(param_1 + 0xd8) * iVar8 * 0x10) + (long)(iVar15 << 4);
          if (*(int *)(param_1 + 0xb68) == 1) {
            if (0 < iVar15) {
              (*_VP8SimpleHFilter16)(lVar21,iVar8,uVar10 + 4);
            }
            if (pbVar17[2] == 0) {
              if (iVar9 < 1) goto LAB_00100c2c;
LAB_00100cdf:
              (*_VP8SimpleVFilter16)(lVar21,iVar8,uVar10 + 4);
            }
            else {
              (*_VP8SimpleHFilter16i)(lVar21,iVar8,uVar10);
              if (0 < iVar9) goto LAB_00100cdf;
            }
            if (pbVar17[2] != 0) {
              (*_VP8SimpleVFilter16i)(lVar21,iVar8,uVar10);
            }
          }
          else {
            iVar7 = *(int *)(param_1 + 0xb44);
            lVar14 = (long)(*(int *)(param_1 + 0xd8) * iVar7 * 8) + (long)(iVar15 * 8);
            bVar3 = pbVar17[3];
            lVar18 = *(long *)(param_1 + 0xb30) + lVar14;
            lVar14 = lVar14 + *(long *)(param_1 + 0xb38);
            if (0 < iVar15) {
              (*_VP8HFilter16)(lVar21,iVar8,uVar10 + 4,bVar4,bVar3);
              (*_VP8HFilter8)(lVar18,lVar14,iVar7,uVar10 + 4,bVar4,bVar3);
            }
            if (pbVar17[2] == 0) {
              if (iVar9 < 1) goto LAB_00100c2c;
LAB_00100bac:
              (*_VP8VFilter16)(lVar21,iVar8,uVar10 + 4,bVar4,bVar3);
              (*_VP8VFilter8)(lVar18,lVar14,iVar7,uVar10 + 4,bVar4,bVar3);
            }
            else {
              (*_VP8HFilter16i)(lVar21,iVar8,uVar10,bVar4,bVar3);
              (*_VP8HFilter8i)(lVar18,lVar14,iVar7,uVar10,bVar4,bVar3);
              if (0 < iVar9) goto LAB_00100bac;
            }
            if (pbVar17[2] != 0) {
              (*_VP8VFilter16i)(lVar21,iVar8,uVar10,bVar4,bVar3);
              (*_VP8VFilter8i)(lVar18,lVar14,iVar7,uVar10,bVar4,bVar3);
            }
          }
        }
LAB_00100c2c:
        iVar15 = iVar15 + 1;
        lVar20 = lVar20 + 4;
      } while (iVar15 < *(int *)(param_1 + 0x1a8));
      goto LAB_0010080b;
    }
  }
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_001009a0:
    uVar16 = 1;
    if (iVar5 + 1 != *(int *)(param_1 + 0xd0)) {
      return 1;
    }
  }
  else {
    iVar9 = (iVar6 + 1) * 0x10;
    if (iVar6 == 0) {
      lVar20 = *(long *)(param_1 + 0xb30);
      iVar15 = 0;
      *(long *)(param_2 + 6) = lVar11 + *(long *)(param_1 + 0xb28);
      *(long *)(param_2 + 8) = lVar19 + lVar20;
      lVar11 = lVar19 + *(long *)(param_1 + 0xb38);
    }
    else {
      iVar15 = (iVar9 + -0x10) - (uint)bVar2;
      *(long *)(param_2 + 6) = lVar22;
      *(long *)(param_2 + 8) = lVar23;
      lVar11 = lVar12;
    }
    *(long *)(param_2 + 10) = lVar11;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    if (iVar6 < iVar1) {
      iVar9 = iVar9 - (uint)bVar2;
    }
    iVar8 = param_2[0x21];
    if (iVar9 <= param_2[0x21]) {
      iVar8 = iVar9;
    }
    if (*(long *)(param_1 + 0xb98) == 0) {
      iVar9 = param_2[0x20];
      if (iVar15 < iVar9) {
LAB_00100eb9:
        lVar11 = *(long *)(param_2 + 0x26);
LAB_001008a6:
        iVar7 = *(int *)(param_1 + 0xb40);
        iVar13 = iVar9 - iVar15;
        lVar19 = (long)((iVar13 >> 1) * *(int *)(param_1 + 0xb44));
        *(long *)(param_2 + 10) = *(long *)(param_2 + 10) + lVar19;
        *(long *)(param_2 + 6) = (long)(iVar7 * iVar13) + *(long *)(param_2 + 6);
        *(long *)(param_2 + 8) = lVar19 + *(long *)(param_2 + 8);
        iVar15 = iVar9;
        if (lVar11 != 0) {
          *(long *)(param_2 + 0x26) = lVar11 + iVar13 * *param_2;
        }
      }
      if (iVar8 <= iVar15) goto LAB_001009a0;
    }
    else {
      if (iVar8 <= iVar15) {
        iVar9 = param_2[0x20];
        if (iVar15 < iVar9) {
          lVar11 = 0;
          goto LAB_001008a6;
        }
        goto LAB_001009a0;
      }
      lVar11 = VP8DecompressAlphaRows(param_1,param_2,iVar15,iVar8 - iVar15);
      *(long *)(param_2 + 0x26) = lVar11;
      if (lVar11 == 0) {
        uVar16 = VP8SetError(param_1,3,"Could not decode alpha data.");
        return uVar16;
      }
      iVar9 = param_2[0x20];
      if (iVar15 < iVar9) goto LAB_00100eb9;
    }
    iVar7 = param_2[0x1e];
    *(long *)(param_2 + 10) = *(long *)(param_2 + 10) + (long)(iVar7 >> 1);
    *(long *)(param_2 + 6) = (long)iVar7 + *(long *)(param_2 + 6);
    *(long *)(param_2 + 8) = (long)(iVar7 >> 1) + *(long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x26) != 0) {
      *(long *)(param_2 + 0x26) = *(long *)(param_2 + 0x26) + (long)iVar7;
    }
    param_2[2] = iVar15 - iVar9;
    param_2[3] = param_2[0x1f] - iVar7;
    param_2[4] = iVar8 - iVar15;
    uVar10 = (**(code **)(param_2 + 0x10))(param_2);
    uVar16 = (ulong)uVar10;
    if (iVar5 + 1 != *(int *)(param_1 + 0xd0)) {
      return uVar16;
    }
  }
  if (iVar6 < iVar1) {
    memcpy((void *)(*(long *)(param_1 + 0xb28) - __n_00),
           (void *)(lVar22 + (*(int *)(param_1 + 0xb40) << 4)),__n_00);
    memcpy((void *)(*(long *)(param_1 + 0xb30) - __n),
           (void *)(lVar23 + (*(int *)(param_1 + 0xb44) << 3)),__n);
    memcpy((void *)(*(long *)(param_1 + 0xb38) - __n),
           (void *)(lVar12 + (*(int *)(param_1 + 0xb44) << 3)),__n);
  }
  return uVar16;
}



void VP8InitDithering(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (-1 < iVar1) {
    if (iVar1 < 0x65) {
      uVar4 = (uint)(iVar1 * 0xff) / 100;
      if ((uint)(iVar1 * 0xff) / 100 == 0) goto LAB_00100fbb;
    }
    else {
      uVar4 = 0xff;
    }
    puVar3 = (uint *)(param_2 + 0x440);
    uVar8 = 0;
    do {
      uVar6 = puVar3[-1];
      if ((int)uVar6 < 0xc) {
        lVar7 = (long)(int)uVar6;
        if ((int)uVar6 < 0) {
          lVar7 = 0;
        }
        uVar6 = (int)((byte)kQuantToDitherAmp[lVar7] * uVar4) >> 3;
        *puVar3 = uVar6;
      }
      else {
        uVar6 = *puVar3;
      }
      puVar3 = puVar3 + 8;
      uVar8 = uVar8 | uVar6;
    } while (puVar3 != (uint *)(param_2 + 0x4c0));
    if (uVar8 != 0) {
      VP8InitRandom(_LC2,param_2 + 0x33c);
      *(undefined4 *)(param_2 + 0x338) = 1;
    }
  }
LAB_00100fbb:
  iVar1 = *(int *)(param_1 + 0x34);
  iVar5 = 0;
  if (-1 < iVar1) {
    iVar5 = iVar1;
  }
  iVar2 = 100;
  if (iVar1 < 0x65) {
    iVar2 = iVar5;
  }
  *(int *)(param_2 + 0xbc8) = iVar2;
  return;
}



ulong VP8ProcessRow(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  uVar7 = 0;
  if ((0 < *(int *)(param_1 + 0xb68)) && (*(int *)(param_1 + 0x1a4) <= *(int *)(param_1 + 0xb5c))) {
    uVar7 = (uint)(*(int *)(param_1 + 0xb5c) <= *(int *)(param_1 + 0x1ac));
  }
  if (*(int *)(param_1 + 200) == 0) {
    *(ulong *)(param_1 + 0xdc) = CONCAT44(uVar7,*(undefined4 *)(param_1 + 0xb5c));
    ReconstructRow(param_1,param_1 + 0xd8);
    uVar5 = FinishRow(param_1,param_2);
    return uVar5;
  }
  lVar6 = WebPGetWorkerInterface();
  uVar3 = (**(code **)(lVar6 + 0x10))(param_1 + 0x98);
  if ((uVar3 & 1) != 0) {
    uVar1 = param_2[1];
    *(undefined8 *)(param_1 + 0xf8) = *param_2;
    *(undefined8 *)(param_1 + 0x100) = uVar1;
    uVar1 = param_2[3];
    *(undefined8 *)(param_1 + 0x108) = param_2[2];
    *(undefined8 *)(param_1 + 0x110) = uVar1;
    uVar1 = param_2[5];
    *(undefined8 *)(param_1 + 0x118) = param_2[4];
    *(undefined8 *)(param_1 + 0x120) = uVar1;
    uVar1 = param_2[7];
    *(undefined8 *)(param_1 + 0x128) = param_2[6];
    *(undefined8 *)(param_1 + 0x130) = uVar1;
    uVar1 = param_2[9];
    *(undefined8 *)(param_1 + 0x138) = param_2[8];
    *(undefined8 *)(param_1 + 0x140) = uVar1;
    uVar1 = param_2[0xb];
    *(undefined8 *)(param_1 + 0x148) = param_2[10];
    *(undefined8 *)(param_1 + 0x150) = uVar1;
    uVar1 = param_2[0xd];
    *(undefined8 *)(param_1 + 0x158) = param_2[0xc];
    *(undefined8 *)(param_1 + 0x160) = uVar1;
    uVar1 = param_2[0xf];
    *(undefined8 *)(param_1 + 0x168) = param_2[0xe];
    *(undefined8 *)(param_1 + 0x170) = uVar1;
    uVar1 = param_2[0x11];
    *(undefined8 *)(param_1 + 0x178) = param_2[0x10];
    *(undefined8 *)(param_1 + 0x180) = uVar1;
    uVar1 = param_2[0x12];
    uVar2 = param_2[0x13];
    *(uint *)(param_1 + 0xe0) = uVar7;
    *(undefined8 *)(param_1 + 0x188) = uVar1;
    *(undefined8 *)(param_1 + 400) = uVar2;
    *(ulong *)(param_1 + 0xd8) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0xb58) >> 0x20),
                  (int)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20));
    if (*(int *)(param_1 + 200) == 2) {
      uVar1 = *(undefined8 *)(param_1 + 0xb60);
      *(undefined8 *)(param_1 + 0xb60) = *(undefined8 *)(param_1 + 0xf0);
      *(undefined8 *)(param_1 + 0xf0) = uVar1;
    }
    else {
      ReconstructRow(param_1,param_1 + 0xd8);
    }
    if (uVar7 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0xb18);
      *(undefined8 *)(param_1 + 0xb18) = *(undefined8 *)(param_1 + 0xe8);
      *(undefined8 *)(param_1 + 0xe8) = uVar1;
    }
    lVar6 = WebPGetWorkerInterface();
    (**(code **)(lVar6 + 0x18))(param_1 + 0x98);
    iVar4 = *(int *)(param_1 + 0xcc) + 1;
    *(int *)(param_1 + 0xcc) = iVar4;
    if (iVar4 == *(int *)(param_1 + 0xd0)) {
      *(undefined4 *)(param_1 + 0xcc) = 0;
    }
  }
  return (ulong)(uVar3 & 1);
}



undefined4 VP8EnterCritical(undefined4 *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  char *pcVar14;
  
  if ((*(code **)(param_2 + 0x48) != (code *)0x0) &&
     (iVar3 = (**(code **)(param_2 + 0x48))(), iVar3 == 0)) {
    VP8SetError(param_1,6,"Frame setup failed");
    return *param_1;
  }
  if (*(int *)(param_2 + 0x70) == 0) {
    iVar3 = param_1[0x2da];
    uVar9 = (uint)*(byte *)((long)&kFilterExtraRows + (long)iVar3);
    if (iVar3 == 2) {
      *(undefined8 *)(param_1 + 0x68) = 0;
      iVar3 = (int)(uVar9 + 0xf + *(int *)(param_2 + 0x7c)) >> 4;
      if ((int)param_1[0x66] < iVar3) {
        iVar3 = param_1[0x66];
      }
      iVar4 = (int)(uVar9 + 0xf + *(int *)(param_2 + 0x84)) >> 4;
      param_1[0x6a] = iVar3;
      if ((int)param_1[0x67] < iVar4) {
        iVar4 = param_1[0x67];
      }
      param_1[0x6b] = iVar4;
      goto LAB_0010130b;
    }
  }
  else {
    param_1[0x2da] = 0;
    uVar9 = 0;
    iVar3 = 0;
  }
  iVar13 = (int)(*(int *)(param_2 + 0x78) - uVar9) >> 4;
  iVar4 = (int)(*(int *)(param_2 + 0x80) - uVar9) >> 4;
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  param_1[0x68] = iVar13;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  iVar13 = *(int *)(param_2 + 0x7c);
  param_1[0x69] = iVar4;
  iVar4 = (int)(uVar9 + 0xf + iVar13) >> 4;
  if ((int)param_1[0x66] < iVar4) {
    iVar4 = param_1[0x66];
  }
  iVar13 = (int)(uVar9 + 0xf + *(int *)(param_2 + 0x84)) >> 4;
  param_1[0x6a] = iVar4;
  if ((int)param_1[0x67] < iVar13) {
    iVar13 = param_1[0x67];
  }
  param_1[0x6b] = iVar13;
  if (iVar3 < 1) {
    return 0;
  }
LAB_0010130b:
  iVar3 = param_1[0x21];
  iVar4 = param_1[0x18];
  pcVar14 = (char *)(param_1 + 0x25);
  puVar12 = param_1;
LAB_0010132a:
  if (iVar3 == 0) {
    iVar13 = param_1[0x16];
  }
  else {
    iVar13 = (int)*pcVar14;
    if (param_1[0x23] == 0) {
      iVar13 = iVar13 + param_1[0x16];
    }
  }
  puVar5 = puVar12;
  if (iVar4 == 0) {
    bVar2 = false;
    iVar7 = iVar13;
    goto LAB_0010137a;
  }
  iVar6 = param_1[0x19];
  iVar7 = iVar13 + iVar6;
  if (0 < iVar7) {
    bVar2 = false;
    goto LAB_001013b8;
  }
  *(undefined1 *)(puVar12 + 0x2db) = 0;
  puVar5 = puVar12 + 1;
  *(undefined1 *)((long)puVar12 + 0xb6e) = 0;
  do {
    bVar2 = true;
    iVar7 = iVar6 + iVar13 + param_1[0x1d];
LAB_0010137a:
    do {
      if (iVar7 < 1) {
        *(undefined1 *)(puVar5 + 0x2db) = 0;
        *(bool *)((long)puVar5 + 0xb6e) = bVar2;
        if (bVar2) {
LAB_0010142f:
          puVar12 = puVar12 + 2;
          pcVar14 = pcVar14 + 1;
          if (param_1 + 8 == puVar12) {
            return 0;
          }
          goto LAB_0010132a;
        }
      }
      else {
LAB_001013b8:
        iVar6 = param_1[0x17];
        iVar10 = 0x3f;
        if (iVar7 < 0x40) {
          iVar10 = iVar7;
        }
        iVar11 = iVar10;
        if (0 < iVar6) {
          iVar1 = iVar10 >> 1;
          if (4 < iVar6) {
            iVar1 = iVar10 >> 2;
          }
          iVar11 = 9 - iVar6;
          if (iVar1 < 9 - iVar6) {
            iVar11 = iVar1;
          }
        }
        if (iVar11 < 1) {
          iVar11 = 1;
        }
        *(char *)((long)puVar5 + 0xb6d) = (char)iVar11;
        *(char *)(puVar5 + 0x2db) = (char)iVar11 + (char)iVar10 * '\x02';
        uVar8 = 2;
        if (iVar7 < 0x28) {
          uVar8 = 0xe < iVar7;
        }
        *(undefined1 *)((long)puVar5 + 0xb6f) = uVar8;
        *(bool *)((long)puVar5 + 0xb6e) = bVar2;
        if (bVar2) goto LAB_0010142f;
      }
      puVar5 = puVar5 + 1;
      bVar2 = true;
      iVar7 = iVar13;
    } while (iVar4 == 0);
    iVar6 = param_1[0x19];
  } while( true );
}



undefined4 VP8ExitCritical(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 1;
  if (0 < *(int *)(param_1 + 200)) {
    lVar2 = WebPGetWorkerInterface();
    uVar1 = (**(code **)(lVar2 + 0x10))(param_1 + 0x98);
  }
  if (*(code **)(param_2 + 0x50) != (code *)0x0) {
    (**(code **)(param_2 + 0x50))(param_2);
  }
  return uVar1;
}



undefined8 VP8GetThreadMethod(void)

{
  return 0;
}



undefined8 VP8InitFrame(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  size_t sVar9;
  void *__s;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  size_t __n;
  size_t local_70;
  long local_68;
  
  iVar7 = *(int *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if (iVar7 < 1) {
    iVar13 = *(int *)(param_1 + 0x198);
    local_68 = (long)iVar13;
    lVar8 = (long)*(int *)(param_1 + 0xb68);
    *(undefined4 *)(param_1 + 0xd0) = 1;
    lVar14 = local_68 << 5;
    sVar9 = (size_t)(iVar13 * 4);
    __n = (long)(iVar13 + 1) * 2;
    local_70 = sVar9;
    if (0 < *(int *)(param_1 + 0xb68)) {
      iVar15 = 0x10;
      iVar10 = 1;
      lVar6 = local_68;
LAB_0010190f:
      lVar6 = lVar6 * 4;
      sVar9 = lVar6 + local_70;
      goto LAB_0010191c;
    }
    iVar15 = 0x10;
    iVar10 = 1;
    lVar6 = 0;
    lVar12 = local_68;
  }
  else {
    lVar8 = WebPGetWorkerInterface();
    iVar7 = (**(code **)(lVar8 + 8))(param_1 + 0x98);
    if (iVar7 == 0) {
      iVar7 = VP8SetError(param_1,1,"thread initialization failed.");
      if (iVar7 == 0) {
        return 0;
      }
      iVar10 = *(int *)(param_1 + 0xd0);
      iVar2 = *(int *)(param_1 + 0xb68);
      iVar15 = iVar10 << 4;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xb68);
      *(long *)(param_1 + 0xb0) = param_1;
      *(long *)(param_1 + 0xb8) = param_1 + 0xf8;
      *(code **)(param_1 + 0xa8) = FinishRow;
      iVar15 = 0x20;
      if (0 < iVar2) {
        iVar15 = 0x30;
      }
      iVar10 = (0 < iVar2) + 2;
      *(int *)(param_1 + 0xd0) = iVar10;
    }
    lVar8 = (long)iVar2;
    iVar13 = *(int *)(param_1 + 0x198);
    local_68 = (long)iVar13;
    lVar14 = local_68 << 5;
    sVar9 = (size_t)(iVar13 * 4);
    __n = (long)(iVar13 + 1) * 2;
    iVar7 = *(int *)(param_1 + 200);
    local_70 = sVar9;
    if (0 < iVar2) {
      lVar6 = local_68;
      if (0 < iVar7) {
        lVar6 = (long)(iVar13 * 2);
      }
      goto LAB_0010190f;
    }
    lVar6 = 0;
LAB_0010191c:
    lVar12 = local_68;
    if (iVar7 == 2) {
      lVar12 = (long)(iVar13 * 2);
    }
  }
  lVar11 = 0;
  lVar16 = ((int)(((uint)*(byte *)((long)&kFilterExtraRows + (long)(int)lVar8) + iVar15) * 3) / 2) *
           lVar14;
  if (*(long *)(param_1 + 0xb98) != 0) {
    lVar11 = (ulong)*(ushort *)(param_1 + 0x4c) * (ulong)*(ushort *)(param_1 + 0x4e);
  }
  lVar5 = *(long *)(param_1 + 0xb48);
  uVar17 = __n + 0x35f + lVar14 + sVar9 + lVar16 + lVar12 * 800 + lVar11;
  if (*(ulong *)(param_1 + 0xb50) < uVar17) {
    WebPSafeFree();
    *(undefined8 *)(param_1 + 0xb50) = 0;
    lVar5 = WebPSafeMalloc(uVar17,1);
    *(long *)(param_1 + 0xb48) = lVar5;
    if (lVar5 == 0) {
      iVar7 = VP8SetError(param_1,1,"no memory during frame initialization.");
      if (iVar7 == 0) {
        return 0;
      }
      goto LAB_001017d6;
    }
    *(ulong *)(param_1 + 0xb50) = uVar17;
    iVar7 = *(int *)(param_1 + 200);
    lVar8 = (long)*(int *)(param_1 + 0xb68);
  }
  *(long *)(param_1 + 0xaf8) = lVar5;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(size_t *)(param_1 + 0xb08) = lVar5 + local_70;
  __s = (void *)(lVar5 + local_70 + lVar14);
  *(long *)(param_1 + 0xb10) = (long)__s + 2;
  lVar14 = 0;
  if (lVar6 != 0) {
    lVar14 = (long)__s + __n;
  }
  uVar17 = (long)__s + __n + 0x1f + lVar6 & 0xffffffffffffffe0;
  *(long *)(param_1 + 0xb18) = lVar14;
  lVar6 = uVar17 + 0x340;
  *(long *)(param_1 + 0xe8) = lVar14;
  lVar5 = lVar6;
  if ((int)lVar8 < 1) {
LAB_00101705:
    if (iVar7 == 2) {
      lVar5 = local_68 * 800 + lVar6;
    }
  }
  else if (0 < iVar7) {
    *(long *)(param_1 + 0xe8) = lVar14 + local_68 * 4;
    goto LAB_00101705;
  }
  *(long *)(param_1 + 0xf0) = lVar5;
  iVar7 = iVar13 * 8;
  bVar1 = *(byte *)((long)&kFilterExtraRows + lVar8);
  iVar13 = iVar13 * 0x10;
  *(int *)(param_1 + 0xb44) = iVar7;
  *(int *)(param_1 + 0xb40) = iVar13;
  *(long *)(param_1 + 0xb60) = lVar6;
  lVar6 = lVar6 + lVar12 * 800;
  *(ulong *)(param_1 + 0xb20) = uVar17;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  lVar14 = (long)(((int)(uint)bVar1 >> 1) * iVar7);
  lVar8 = (int)(iVar13 * (uint)bVar1) + lVar6;
  *(long *)(param_1 + 0xb28) = lVar8;
  lVar8 = lVar8 + iVar13 * iVar10 * 0x10 + lVar14;
  *(long *)(param_1 + 0xb30) = lVar8;
  *(long *)(param_1 + 0xb38) = lVar8 + iVar7 * iVar10 * 8 + lVar14;
  lVar8 = lVar6 + lVar16;
  if (lVar11 == 0) {
    lVar8 = 0;
  }
  *(long *)(param_1 + 3000) = lVar8;
  memset(__s,0,__n);
  VP8InitScanline(param_1);
  memset(*(void **)(param_1 + 0xaf8),0,local_70);
LAB_001017d6:
  uVar3 = *(undefined8 *)(param_1 + 0xb28);
  uVar4 = *(undefined8 *)(param_1 + 0xb30);
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0xb38);
  uVar3 = *(undefined8 *)(param_1 + 0xb40);
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0x30) = uVar3;
  VP8DspInit();
  return 1;
}


