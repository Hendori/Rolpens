
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 QuantizeLevels(long param_1,int param_2,int param_3,int param_4,ulong *param_5)

{
  double *pdVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  double *pdVar8;
  uint uVar9;
  int *piVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  long in_FS_OFFSET;
  bool bVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  int local_2148 [256];
  int local_1d48 [256];
  double local_1948 [256];
  double local_1148 [256];
  double local_948 [256];
  undefined1 auStack_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = 0;
  piVar10 = local_2148;
  for (lVar7 = 0x80; lVar7 != 0; lVar7 = lVar7 + -1) {
    piVar10[0] = 0;
    piVar10[1] = 0;
    piVar10 = piVar10 + 2;
  }
  piVar10 = local_1d48;
  for (lVar7 = 0x80; lVar7 != 0; lVar7 = lVar7 + -1) {
    piVar10[0] = 0;
    piVar10[1] = 0;
    piVar10 = piVar10 + 2;
  }
  pdVar8 = local_1948;
  for (lVar7 = 0x100; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pdVar8 = 0.0;
    pdVar8 = pdVar8 + 1;
  }
  if (((param_1 == 0) || (param_2 < 1)) || (param_3 < 1)) {
    uVar6 = 0;
  }
  else if (param_4 - 2U < 0xff) {
    param_3 = param_3 * param_2;
    uVar11 = 0;
    iVar12 = 0;
    uVar9 = 0;
    uVar14 = 0xff;
    do {
      bVar3 = *(byte *)(param_1 + uVar11);
      uVar15 = (ulong)bVar3;
      iVar12 = iVar12 + (uint)(local_2148[uVar15] == 0);
      if ((uint)bVar3 < (uint)uVar14) {
        uVar14 = uVar15;
      }
      if (uVar9 < bVar3) {
        uVar9 = (uint)bVar3;
      }
      uVar11 = uVar11 + 1;
      local_2148[uVar15] = local_2148[uVar15] + 1;
    } while (uVar11 < (ulong)(long)param_3);
    dVar19 = 0.0;
    if (param_4 < iVar12) {
      iVar12 = param_4 + -1;
      iVar13 = (int)uVar14;
      lVar7 = 0;
      do {
        local_1948[lVar7] =
             ((double)(int)lVar7 * (double)(int)(uVar9 - iVar13)) / (double)iVar12 + (double)iVar13;
        lVar7 = lVar7 + 1;
      } while (lVar7 != param_4);
      iVar16 = 6;
      local_1d48[(int)uVar9] = iVar12;
      dVar20 = _LC0;
      do {
        iVar5 = 0;
        pdVar8 = local_1148;
        for (lVar7 = 0x100; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pdVar8 = 0.0;
          pdVar8 = pdVar8 + 1;
        }
        pdVar8 = local_948;
        for (lVar7 = 0x100; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pdVar8 = 0.0;
          pdVar8 = pdVar8 + 1;
        }
        lVar7 = (long)iVar13;
        if (uVar9 < (uint)uVar14) {
          if (param_4 != 2) goto LAB_001003b9;
LAB_00100404:
          dVar19 = 0.0;
        }
        else {
          do {
            pdVar8 = local_1948 + iVar5;
            iVar4 = iVar5;
            do {
              iVar5 = iVar4;
              if (iVar12 <= iVar5) break;
              dVar19 = *pdVar8;
              pdVar1 = pdVar8 + 1;
              pdVar8 = pdVar8 + 1;
              iVar4 = iVar5 + 1;
            } while (dVar19 + *pdVar1 < (double)((int)lVar7 * 2));
            iVar4 = local_2148[lVar7];
            if (0 < iVar4) {
              local_1148[iVar5] = (double)(iVar4 * (int)lVar7) + local_1148[iVar5];
              local_948[iVar5] = (double)iVar4 + local_948[iVar5];
            }
            local_1d48[lVar7] = iVar5;
            lVar7 = lVar7 + 1;
          } while ((int)lVar7 <= (int)uVar9);
          uVar14 = (ulong)(int)(uint)uVar14;
          if (param_4 != 2) {
LAB_001003b9:
            lVar7 = 1;
            do {
              dVar19 = local_948[lVar7];
              if (0.0 < dVar19) {
                local_1948[lVar7] = local_1148[lVar7] / dVar19;
              }
              lVar7 = lVar7 + 1;
            } while ((int)lVar7 < iVar12);
            if (uVar9 < (uint)uVar14) goto LAB_00100404;
          }
          dVar19 = 0.0;
          lVar7 = (long)iVar13;
          do {
            piVar10 = local_1d48 + lVar7;
            piVar2 = local_2148 + lVar7;
            iVar5 = (int)lVar7;
            lVar7 = lVar7 + 1;
            dVar18 = (double)iVar5 - local_1948[*piVar10];
            dVar19 = dVar19 + (double)*piVar2 * dVar18 * dVar18;
          } while ((int)lVar7 <= (int)uVar9);
          dVar20 = dVar20 - dVar19;
        }
      } while (((double)param_3 * __LC2 <= dVar20) &&
              (iVar16 = iVar16 + -1, dVar20 = dVar19, iVar16 != 0));
      if ((uint)uVar14 <= uVar9) {
        uVar11 = 0;
        do {
          auStack_148[uVar11 + uVar14] = (char)(int)(local_1948[local_1d48[uVar14 + uVar11]] + _LC3)
          ;
          bVar17 = uVar9 - (uint)uVar14 != uVar11;
          uVar11 = uVar11 + 1;
        } while (bVar17);
      }
      uVar14 = 0;
      do {
        *(undefined1 *)(param_1 + uVar14) = auStack_148[*(byte *)(param_1 + uVar14)];
        uVar14 = uVar14 + 1;
      } while (uVar14 < (ulong)(long)param_3);
    }
    if (param_5 != (ulong *)0x0) {
      if (dVar19 < _LC4) {
        *param_5 = (long)dVar19;
        uVar6 = 1;
        goto LAB_00100390;
      }
      *param_5 = (long)(dVar19 - _LC4);
      *param_5 = *param_5 ^ 0x8000000000000000;
    }
    uVar6 = 1;
  }
LAB_00100390:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


