
uint xstrtoimax(byte *param_1,undefined8 *param_2,undefined4 param_3,long *param_4,char *param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (undefined8 *)0x0) {
    param_2 = &local_48;
  }
  piVar5 = __errno_location();
  *piVar5 = 0;
  lVar6 = __isoc23_strtoimax(param_1,param_2,param_3);
  pbVar3 = (byte *)*param_2;
  if (pbVar3 != param_1) {
    if (*piVar5 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 4;
      if (*piVar5 != 0x22) goto LAB_00100083;
      uVar14 = 1;
    }
    if ((param_5 != (char *)0x0) && (bVar1 = *pbVar3, bVar1 != 0)) {
      pcVar7 = strchr(param_5,(int)(char)bVar1);
      lVar11 = lVar6;
      if (pcVar7 != (char *)0x0) goto LAB_00100103;
      goto switchD_00100196_caseD_1;
    }
    goto LAB_00100080;
  }
  if (param_5 == (char *)0x0) {
    uVar14 = 4;
    goto LAB_00100083;
  }
  bVar1 = *pbVar3;
  uVar14 = 4;
  if ((bVar1 == 0) || (pcVar7 = strchr(param_5,(int)(char)bVar1), pcVar7 == (char *)0x0))
  goto LAB_00100083;
  lVar11 = 1;
  uVar14 = 0;
LAB_00100103:
  uVar4 = bVar1 - 0x45;
  if ((((byte)uVar4 < 0x30) && ((0x81440030b945U >> ((ulong)uVar4 & 0x3f) & 1) != 0)) &&
     (pcVar7 = strchr(param_5,0x30), pcVar7 != (char *)0x0)) {
    bVar2 = pbVar3[1];
    if (bVar2 == 0x44) {
      iVar12 = 2;
      lVar9 = 1000;
    }
    else if (bVar2 == 0x69) {
      lVar9 = 0x400;
      iVar12 = (pbVar3[2] == 0x42) + 1 + (uint)(pbVar3[2] == 0x42);
    }
    else {
      lVar9 = 0x400;
      iVar12 = (bVar2 == 0x42) + 1;
      if (bVar2 == 0x42) {
        lVar9 = 1000;
      }
    }
  }
  else {
    iVar12 = 1;
    lVar9 = 0x400;
  }
  iVar8 = (int)lVar9;
  lVar6 = lVar11;
  switch(bVar1 - 0x42 & 0xff) {
  case 0:
    lVar6 = lVar11 * 0x400;
    if (SEXT816(lVar6) != SEXT816(lVar11) * SEXT416(0x400)) {
LAB_001002b4:
      uVar14 = 1;
      if (lVar11 < 0) {
        lVar6 = -0x8000000000000000;
      }
      else {
LAB_001002c3:
        uVar14 = 1;
        lVar6 = 0x7fffffffffffffff;
      }
    }
    goto switchD_00100196_caseD_21;
  default:
switchD_00100196_caseD_1:
    *param_4 = lVar11;
    uVar14 = uVar14 | 2;
    goto LAB_00100083;
  case 3:
    iVar13 = 6;
    uVar4 = 0;
    do {
      lVar6 = iVar8 * lVar11;
      if (SEXT816(lVar6) != SEXT816((long)iVar8) * SEXT816(lVar11)) {
        uVar4 = 1;
        if (lVar11 < 0) {
          lVar6 = -0x8000000000000000;
        }
        else {
          lVar6 = 0x7fffffffffffffff;
        }
      }
      iVar13 = iVar13 + -1;
      lVar11 = lVar6;
    } while (iVar13 != 0);
    break;
  case 5:
  case 0x25:
    iVar13 = 3;
    uVar4 = 0;
    do {
      lVar6 = iVar8 * lVar11;
      if (SEXT816(lVar6) != SEXT816((long)iVar8) * SEXT816(lVar11)) {
        uVar4 = 1;
        if (lVar11 < 0) {
          lVar6 = -0x8000000000000000;
        }
        else {
          lVar6 = 0x7fffffffffffffff;
        }
      }
      iVar13 = iVar13 + -1;
      lVar11 = lVar6;
    } while (iVar13 != 0);
    break;
  case 9:
  case 0x29:
    lVar6 = lVar9 * lVar11;
    if (SEXT816(lVar6) != SEXT816(lVar9) * SEXT816(lVar11)) {
      if (-1 < lVar11) goto LAB_001002c3;
      lVar6 = -0x8000000000000000;
      uVar14 = 1;
    }
    goto switchD_00100196_caseD_21;
  case 0xb:
  case 0x2b:
    lVar9 = (long)iVar8;
    lVar10 = lVar9 * lVar11;
    if (SEXT816(lVar10) != SEXT816(lVar9) * SEXT816(lVar11)) goto LAB_001002b4;
    lVar6 = lVar9 * lVar10;
    if (SEXT816(lVar6) != SEXT816(lVar9) * SEXT816(lVar10)) {
      uVar14 = 1;
      lVar6 = -0x8000000000000000;
      if (-1 < lVar10) {
        lVar6 = 0x7fffffffffffffff;
      }
    }
    goto switchD_00100196_caseD_21;
  case 0xe:
    iVar13 = 5;
    uVar4 = 0;
    do {
      lVar6 = iVar8 * lVar11;
      if (SEXT816(lVar6) != SEXT816((long)iVar8) * SEXT816(lVar11)) {
        uVar4 = 1;
        if (lVar11 < 0) {
          lVar6 = -0x8000000000000000;
        }
        else {
          lVar6 = 0x7fffffffffffffff;
        }
      }
      iVar13 = iVar13 + -1;
      lVar11 = lVar6;
    } while (iVar13 != 0);
    break;
  case 0xf:
    iVar13 = 10;
    uVar4 = 0;
    do {
      lVar6 = iVar8 * lVar11;
      if (SEXT816(lVar6) != SEXT816((long)iVar8) * SEXT816(lVar11)) {
        uVar4 = 1;
        if (lVar11 < 0) {
          lVar6 = -0x8000000000000000;
        }
        else {
          lVar6 = 0x7fffffffffffffff;
        }
      }
      iVar13 = iVar13 + -1;
      lVar11 = lVar6;
    } while (iVar13 != 0);
    break;
  case 0x10:
    iVar13 = 9;
    uVar4 = 0;
    do {
      lVar6 = iVar8 * lVar11;
      if (SEXT816(lVar6) != SEXT816((long)iVar8) * SEXT816(lVar11)) {
        uVar4 = 1;
        if (lVar11 < 0) {
          lVar6 = -0x8000000000000000;
        }
        else {
          lVar6 = 0x7fffffffffffffff;
        }
      }
      iVar13 = iVar13 + -1;
      lVar11 = lVar6;
    } while (iVar13 != 0);
    break;
  case 0x12:
  case 0x32:
    iVar13 = 4;
    uVar4 = 0;
    do {
      lVar6 = iVar8 * lVar11;
      if (SEXT816(lVar6) != SEXT816((long)iVar8) * SEXT816(lVar11)) {
        uVar4 = 1;
        if (lVar11 < 0) {
          lVar6 = -0x8000000000000000;
        }
        else {
          lVar6 = 0x7fffffffffffffff;
        }
      }
      iVar13 = iVar13 + -1;
      lVar11 = lVar6;
    } while (iVar13 != 0);
    break;
  case 0x17:
    iVar13 = 8;
    uVar4 = 0;
    do {
      lVar6 = iVar8 * lVar11;
      if (SEXT816(lVar6) != SEXT816((long)iVar8) * SEXT816(lVar11)) {
        uVar4 = 1;
        if (lVar11 < 0) {
          lVar6 = -0x8000000000000000;
        }
        else {
          lVar6 = 0x7fffffffffffffff;
        }
      }
      iVar13 = iVar13 + -1;
      lVar11 = lVar6;
    } while (iVar13 != 0);
    break;
  case 0x18:
    iVar13 = 7;
    uVar4 = 0;
    do {
      lVar6 = iVar8 * lVar11;
      if (SEXT816(lVar6) != SEXT816((long)iVar8) * SEXT816(lVar11)) {
        uVar4 = 1;
        if (lVar11 < 0) {
          lVar6 = -0x8000000000000000;
        }
        else {
          lVar6 = 0x7fffffffffffffff;
        }
      }
      iVar13 = iVar13 + -1;
      lVar11 = lVar6;
    } while (iVar13 != 0);
    break;
  case 0x20:
    lVar6 = lVar11 * 0x200;
    if (SEXT816(lVar6) != SEXT816(lVar11) * SEXT416(0x200)) goto LAB_001002b4;
  case 0x21:
    goto switchD_00100196_caseD_21;
  case 0x35:
    lVar6 = lVar11 * 2;
    if (SEXT816(lVar6) != SEXT816(lVar11) * SEXT816(2)) goto LAB_001002b4;
    goto switchD_00100196_caseD_21;
  }
  uVar14 = uVar14 | uVar4;
switchD_00100196_caseD_21:
  *param_2 = pbVar3 + iVar12;
  if (pbVar3[iVar12] != 0) {
    uVar14 = uVar14 | 2;
  }
LAB_00100080:
  *param_4 = lVar6;
LAB_00100083:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


