
uint interpretDFD(long param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6
                 )

{
  long lVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  
  uVar8 = (*(uint *)(param_1 + 8) >> 0x12) - 6;
  if (uVar8 < 4) {
switchD_001003e5_caseD_3:
    uVar12 = 0x203;
  }
  else {
    param_2[0] = 0;
    param_2[1] = 0;
    param_3[0] = 0;
    param_3[1] = 0;
    param_4[0] = 0;
    param_4[1] = 0;
    param_5[0] = 0;
    param_5[1] = 0;
    if (0xff < *(uint *)(param_1 + 0x14)) {
      return 0x202;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      return 0x202;
    }
    uVar8 = uVar8 >> 2;
    lVar1 = param_1 + 4;
    uVar10 = 0;
    uVar12 = 6;
    do {
      uVar9 = *(uint *)(lVar1 + (ulong)uVar12 * 4);
      if (((uVar9 + 1 + (uVar9 >> 0x10 & 0xff) | uVar9) & 7) != 0) {
        uVar9 = 2;
        break;
      }
      uVar10 = uVar10 + 1;
      uVar12 = uVar12 + 4;
      uVar9 = 0;
    } while (uVar10 < uVar8);
    uVar17 = 0;
    uVar15 = 6;
    uVar20 = 0;
    uVar12 = 0;
    bVar19 = 0;
    uVar10 = *(uint *)(param_1 + 0xc) & 0xff;
    uVar11 = 0;
    do {
      uVar6 = *(uint *)(lVar1 + (ulong)uVar15 * 4);
      fVar2 = *(float *)(lVar1 + (ulong)(uVar15 + 3) * 4);
      uVar21 = uVar6 & 0x40000000;
      if ((int)uVar6 < 0) {
        uVar5 = (uint)(NAN(fVar2) || NAN(_LC0));
        if (fVar2 != _LC0) {
          uVar5 = 1;
        }
      }
      else {
        iVar4 = 1 << ((byte)(uVar6 >> 0x10) & 0x1f);
        if (uVar21 == 0) {
          iVar4 = iVar4 * 2;
        }
        uVar5 = (uint)((uint)fVar2 < (uint)(iVar4 + -1) && 1 < (uint)fVar2);
        uVar20 = uVar20 | uVar5;
        uVar5 = (uint)(fVar2 != 1.4013e-45) & (uVar5 ^ 1);
      }
      bVar19 = bVar19 | uVar21 != 0;
      uVar11 = uVar11 | uVar6 >> 0x1f;
      if ((uVar6 & 0xff0000) != 0) {
        uVar12 = uVar5 | uVar12;
      }
      uVar17 = uVar17 + 1;
      uVar15 = uVar15 + 4;
    } while (uVar17 < uVar8);
    uVar12 = uVar12 << 3 | uVar11 << 6 | (uint)bVar19 << 4 | uVar9 | uVar20 << 5;
    if (uVar10 == 2) {
      uVar15 = 0;
      uVar14 = 6;
      uVar21 = 0;
      do {
        bVar7 = *(byte *)(param_1 + 7 + uVar14 * 4) & 0xf;
        if (bVar7 != 0xf) {
          if (bVar7 < 0xd) {
            if (2 < bVar7) goto switchD_001003e5_caseD_3;
          }
          else {
            uVar21 = 1;
          }
        }
        uVar15 = uVar15 + 1;
        uVar14 = (ulong)((int)uVar14 + 4);
      } while (uVar15 < uVar8);
      uVar20 = 0;
      uVar15 = 0;
      uVar17 = 6;
      do {
        uVar6 = *(byte *)(param_1 + 6 + (ulong)uVar17 * 4) + 1;
        if (uVar15 < uVar6) {
          uVar15 = uVar6;
        }
        uVar20 = uVar20 + 1;
        uVar17 = uVar17 + 4;
      } while (uVar20 < uVar8);
      uVar15 = uVar15 - 1;
      if (uVar15 != 0) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          if (iVar4 == 0x20) {
            uVar15 = 0;
            goto LAB_0010028e;
          }
        } while ((uint)(1 << ((byte)iVar4 & 0x1f)) <= uVar15);
        uVar15 = ((-(uint)(uVar9 == 0) & 0xfffffffd) + 4 << ((byte)iVar4 & 0x1f)) >> 3;
      }
LAB_0010028e:
      *param_6 = uVar15;
      uVar12 = uVar12 | 0x188;
    }
    else {
      if (uVar10 != 1) goto switchD_001003e5_caseD_3;
      uVar9 = 7;
      if ((*(uint *)(param_1 + 0xc) & 0xff0000) == 0x20000) {
        uVar12 = uVar12 | 4;
      }
      uVar15 = 0;
      do {
        if (*(int *)(lVar1 + (ulong)uVar9 * 4) != 0) {
          return 0x201;
        }
        uVar15 = uVar15 + 1;
        uVar9 = uVar9 + 4;
      } while (uVar15 < uVar8);
    }
    uVar9 = 0;
    uVar14 = 6;
    do {
      if ((*(byte *)(param_1 + 7 + uVar14 * 4) & 0xf) - 0xd < 2) {
        uVar21 = 1;
      }
      uVar9 = uVar9 + 1;
      uVar14 = (ulong)((int)uVar14 + 4);
    } while (uVar9 < uVar8);
    if ((char)uVar21 == '\0') {
      uVar15 = 0;
      uVar9 = 6;
      do {
        bVar7 = (byte)((uint)*(undefined4 *)(lVar1 + (ulong)uVar9 * 4) >> 0x18);
        if (((bVar7 >> 6 & 1) != bVar19) || ((char)uVar11 != (char)-((char)bVar7 >> 7))) {
          return 0x204;
        }
        uVar15 = uVar15 + 1;
        uVar9 = uVar9 + 4;
      } while (uVar15 < uVar8);
    }
    if ((uVar12 & 2) == 0) {
      uVar17 = 0;
      bVar3 = false;
      uVar9 = 0;
      uVar11 = 0xffffffff;
      uVar15 = 0;
      do {
        uVar20 = *(uint *)(lVar1 + (ulong)(uVar17 * 4 + 6) * 4);
        uVar6 = uVar20 >> 0x18 & 0xf;
        uVar5 = uVar20 >> 3 & 0x1fff;
        uVar20 = (uVar20 >> 0x10 & 0xff) + 1 >> 3;
        switch(uVar6) {
        case 0:
        case 0xe:
          puVar16 = param_2;
          break;
        case 1:
        case 0xd:
          puVar16 = param_3;
          break;
        case 2:
          puVar16 = param_4;
          break;
        default:
          goto switchD_001003e5_caseD_3;
        case 0xf:
          puVar16 = param_5;
        }
        if (uVar6 == uVar11) {
          if (uVar9 - 1 == uVar5) {
            if ((bVar3) && ((uVar12 & 1) == 0)) {
              return 0x200;
            }
            *puVar16 = uVar5;
            uVar12 = uVar12 | 1;
          }
          else {
            if (uVar9 + uVar15 != uVar5) {
              return 0x200;
            }
            if ((bVar3) && ((uVar12 & 1) != 0)) {
              return 0x200;
            }
          }
          bVar3 = true;
          uVar9 = puVar16[1] + uVar20;
          puVar16[1] = uVar9;
        }
        else {
          if (puVar16[1] != 0) {
            if (uVar10 != 2) {
              return 0x200;
            }
            if (uVar6 != 0) {
              return 0x200;
            }
            if ((puVar16 == param_2) && (puVar16 = param_5, param_5[1] != 0))
            goto switchD_001003e5_caseD_3;
          }
          *puVar16 = uVar5;
          puVar16[1] = uVar20;
          uVar9 = uVar20;
        }
        uVar17 = uVar17 + 1;
        *param_6 = uVar9;
        uVar9 = uVar5;
        uVar11 = uVar6;
        uVar15 = uVar20;
      } while (uVar17 < uVar8);
    }
    else {
      uVar20 = 0;
      *param_6 = (uint)*(byte *)(param_1 + 0x14);
      uVar9 = 0;
      uVar11 = 0;
      uVar15 = 0;
      uVar17 = 0xffffffff;
      do {
        uVar6 = *(uint *)(lVar1 + (ulong)(uVar20 * 4 + 6) * 4);
        uVar18 = uVar6 & 0xffff;
        uVar13 = uVar6 >> 0x18 & 0xf;
        uVar5 = (uVar6 >> 0x10 & 0xff) + 1;
        switch(uVar13) {
        case 0:
        case 0xe:
          puVar16 = param_2;
          break;
        case 1:
        case 0xd:
          puVar16 = param_3;
          break;
        case 2:
          puVar16 = param_4;
          break;
        default:
          goto switchD_001003e5_caseD_3;
        case 0xf:
          puVar16 = param_5;
        }
        if (uVar13 == uVar17) {
          if (uVar9 - 1 != uVar18 >> 3) {
            return 0x200;
          }
          if (((uVar11 + uVar15 | uVar6) & 7) != 0) {
            return 0x200;
          }
          puVar16[1] = puVar16[1] + uVar5;
          uVar12 = uVar12 | 1;
        }
        else {
          if (puVar16[1] != 0) {
            if ((uVar10 != 2) || (uVar13 != 0)) {
              return 0x200;
            }
            if ((puVar16 == param_2) && (puVar16 = param_5, param_5[1] != 0))
            goto switchD_001003e5_caseD_3;
          }
          *puVar16 = uVar18;
          puVar16[1] = uVar5;
        }
        uVar20 = uVar20 + 1;
        uVar9 = uVar18 >> 3;
        uVar11 = uVar18;
        uVar15 = uVar5;
        uVar17 = uVar13;
      } while (uVar20 < uVar8);
      if ((uVar12 & 1) != 0) {
        uVar8 = *param_6 * 8 - 8;
        *param_2 = *param_2 ^ uVar8;
        *param_3 = *param_3 ^ uVar8;
        *param_4 = *param_4 ^ uVar8;
        *param_5 = *param_5 ^ uVar8;
      }
    }
    if ((char)uVar21 != '\0') {
      uVar8 = param_3[1];
      if (param_3[1] < param_2[1]) {
        uVar8 = param_2[1];
      }
      if (uVar8 == 1) {
        uVar10 = 1;
      }
      else {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          if (iVar4 == 0x20) {
            uVar10 = 0;
            break;
          }
          uVar10 = 1 << ((byte)iVar4 & 0x1f);
        } while (uVar10 <= uVar8 - 1);
      }
      *param_6 = uVar10;
    }
  }
  return uVar12;
}


