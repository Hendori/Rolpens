
uint xstrtol(byte *param_1,long *param_2,undefined4 param_3,long *param_4,char *param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (long *)0x0) {
    param_2 = &local_48;
  }
  piVar5 = __errno_location();
  *piVar5 = 0;
  lVar6 = __isoc23_strtol(param_1,param_2,param_3);
  pbVar3 = (byte *)*param_2;
  if (pbVar3 != param_1) {
    if (*piVar5 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = 4;
      if (*piVar5 != 0x22) goto LAB_00100082;
      uVar13 = 1;
    }
    if ((param_5 != (char *)0x0) && (bVar1 = *pbVar3, bVar1 != 0)) {
      pcVar8 = strchr(param_5,(int)(char)bVar1);
      lVar10 = lVar6;
      if (pcVar8 != (char *)0x0) goto LAB_00100103;
      goto switchD_00100194_caseD_1;
    }
    goto LAB_0010007f;
  }
  if (param_5 == (char *)0x0) {
    uVar13 = 4;
    goto LAB_00100082;
  }
  bVar1 = *pbVar3;
  uVar13 = 4;
  if ((bVar1 == 0) || (pcVar8 = strchr(param_5,(int)(char)bVar1), pcVar8 == (char *)0x0))
  goto LAB_00100082;
  lVar10 = 1;
  uVar13 = 0;
LAB_00100103:
  uVar4 = bVar1 - 0x45;
  if ((((byte)uVar4 < 0x30) && ((0x81440030b945U >> ((ulong)uVar4 & 0x3f) & 1) != 0)) &&
     (pcVar8 = strchr(param_5,0x30), pcVar8 != (char *)0x0)) {
    bVar2 = pbVar3[1];
    if (bVar2 == 0x44) {
      lVar11 = 2;
      lVar7 = 1000;
    }
    else if (bVar2 == 0x69) {
      lVar7 = 0x400;
      lVar11 = (ulong)(pbVar3[2] == 0x42) * 2 + 1;
    }
    else {
      lVar11 = (ulong)(bVar2 == 0x42) + 1;
      lVar7 = 0x400;
      if (bVar2 == 0x42) {
        lVar7 = 1000;
      }
    }
  }
  else {
    lVar11 = 1;
    lVar7 = 0x400;
  }
  lVar6 = lVar10;
  switch(bVar1 - 0x42 & 0xff) {
  case 0:
    lVar6 = lVar10 * 0x400;
    if (SEXT816(lVar6) != SEXT816(lVar10) * SEXT416(0x400)) {
LAB_0010037d:
      uVar13 = 1;
      if (lVar10 < 0) {
        lVar6 = -0x8000000000000000;
      }
      else {
LAB_0010038c:
        uVar13 = 1;
        lVar6 = 0x7fffffffffffffff;
      }
    }
    goto switchD_00100194_caseD_21;
  default:
switchD_00100194_caseD_1:
    *param_4 = lVar10;
    uVar13 = uVar13 | 2;
    goto LAB_00100082;
  case 3:
    lVar9 = lVar7 * lVar10;
    if (SEXT816(lVar9) != SEXT816(lVar7) * SEXT816(lVar10)) break;
LAB_001002dd:
    lVar10 = lVar7 * lVar9;
    if (SEXT816(lVar10) != SEXT816(lVar7) * SEXT816(lVar9)) goto LAB_001002a5;
    lVar9 = lVar7 * lVar10;
    if (SEXT816(lVar9) == SEXT816(lVar7) * SEXT816(lVar10)) goto LAB_0010028d;
LAB_001002ef:
    uVar4 = 1;
    lVar6 = -0x8000000000000000;
    if (-1 < lVar10) {
      lVar6 = 0x7fffffffffffffff;
    }
    goto LAB_0010023d;
  case 5:
  case 0x25:
    lVar9 = lVar7 * lVar10;
    if (SEXT816(lVar9) == SEXT816(lVar7) * SEXT816(lVar10)) {
      lVar10 = lVar7 * lVar9;
      if (SEXT816(lVar10) != SEXT816(lVar7) * SEXT816(lVar9)) goto LAB_001002a5;
      lVar6 = lVar7 * lVar10;
      if (SEXT816(lVar6) != SEXT816(lVar7) * SEXT816(lVar10)) goto LAB_001002ef;
LAB_00100238:
      uVar4 = 0;
      goto LAB_0010023d;
    }
    break;
  case 9:
  case 0x29:
    lVar6 = lVar7 * lVar10;
    if (SEXT816(lVar6) != SEXT816(lVar7) * SEXT816(lVar10)) {
      if (-1 < lVar10) goto LAB_0010038c;
      lVar6 = -0x8000000000000000;
      uVar13 = 1;
    }
    goto switchD_00100194_caseD_21;
  case 0xb:
  case 0x2b:
    lVar9 = lVar7 * lVar10;
    if (SEXT816(lVar9) != SEXT816(lVar7) * SEXT816(lVar10)) goto LAB_0010037d;
    lVar6 = lVar7 * lVar9;
    if (SEXT816(lVar6) != SEXT816(lVar7) * SEXT816(lVar9)) {
      uVar13 = 1;
      lVar6 = -0x8000000000000000;
      if (-1 < lVar9) {
        lVar6 = 0x7fffffffffffffff;
      }
    }
    goto switchD_00100194_caseD_21;
  case 0xe:
    lVar9 = lVar7 * lVar10;
    if (SEXT816(lVar9) == SEXT816(lVar7) * SEXT816(lVar10)) {
      lVar10 = lVar7 * lVar9;
      if (SEXT816(lVar10) != SEXT816(lVar7) * SEXT816(lVar9)) goto LAB_001002a5;
      lVar12 = lVar7 * lVar10;
      if (SEXT816(lVar12) != SEXT816(lVar7) * SEXT816(lVar10)) goto LAB_001002ef;
      lVar9 = lVar7 * lVar12;
      if (SEXT816(lVar9) == SEXT816(lVar7) * SEXT816(lVar12)) goto LAB_0010029f;
LAB_00100348:
      uVar4 = 1;
      lVar6 = -0x8000000000000000;
      if (-1 < lVar12) {
        lVar6 = 0x7fffffffffffffff;
      }
      goto LAB_0010023d;
    }
    break;
  case 0xf:
    lVar9 = lVar7 * lVar10;
    if (SEXT816(lVar9) == SEXT816(lVar7) * SEXT816(lVar10)) {
      lVar10 = lVar7 * lVar9;
      if (SEXT816(lVar10) != SEXT816(lVar7) * SEXT816(lVar9)) goto LAB_001002a5;
      lVar9 = lVar7 * lVar10;
      if (SEXT816(lVar9) != SEXT816(lVar7) * SEXT816(lVar10)) goto LAB_001002ef;
LAB_001003fb:
      lVar10 = lVar7 * lVar9;
      if (SEXT816(lVar10) != SEXT816(lVar7) * SEXT816(lVar9)) goto LAB_001002a5;
      lVar9 = lVar7 * lVar10;
      if (SEXT816(lVar9) != SEXT816(lVar7) * SEXT816(lVar10)) goto LAB_001002ef;
      goto LAB_001002dd;
    }
    break;
  case 0x10:
    lVar9 = lVar7 * lVar10;
    if (SEXT816(lVar9) == SEXT816(lVar7) * SEXT816(lVar10)) {
      lVar10 = lVar7 * lVar9;
      if (SEXT816(lVar10) != SEXT816(lVar7) * SEXT816(lVar9)) goto LAB_001002a5;
      lVar12 = lVar7 * lVar10;
      if (SEXT816(lVar12) != SEXT816(lVar7) * SEXT816(lVar10)) goto LAB_001002ef;
      lVar9 = lVar7 * lVar12;
      if (SEXT816(lVar9) != SEXT816(lVar7) * SEXT816(lVar12)) goto LAB_00100348;
      goto LAB_001002dd;
    }
    break;
  case 0x12:
  case 0x32:
    lVar9 = lVar7 * lVar10;
    if (SEXT816(lVar9) == SEXT816(lVar7) * SEXT816(lVar10)) {
LAB_0010028d:
      lVar10 = lVar7 * lVar9;
      if (SEXT816(lVar10) == SEXT816(lVar7) * SEXT816(lVar9)) {
        lVar9 = lVar7 * lVar10;
        if (SEXT816(lVar9) != SEXT816(lVar7) * SEXT816(lVar10)) goto LAB_001002ef;
LAB_0010029f:
        lVar6 = lVar7 * lVar9;
        if (SEXT816(lVar6) == SEXT816(lVar7) * SEXT816(lVar9)) goto LAB_00100238;
      }
LAB_001002a5:
      uVar4 = 1;
      lVar6 = -0x8000000000000000;
      if (-1 < lVar9) {
        lVar6 = 0x7fffffffffffffff;
      }
      goto LAB_0010023d;
    }
    break;
  case 0x17:
    lVar9 = lVar7 * lVar10;
    if (SEXT816(lVar9) == SEXT816(lVar7) * SEXT816(lVar10)) goto LAB_001003fb;
    break;
  case 0x18:
    lVar9 = lVar7 * lVar10;
    if (SEXT816(lVar9) == SEXT816(lVar7) * SEXT816(lVar10)) {
      lVar10 = lVar7 * lVar9;
      if (SEXT816(lVar10) != SEXT816(lVar7) * SEXT816(lVar9)) goto LAB_001002a5;
      lVar12 = lVar7 * lVar10;
      if (SEXT816(lVar12) != SEXT816(lVar7) * SEXT816(lVar10)) goto LAB_001002ef;
      lVar9 = lVar7 * lVar12;
      if (SEXT816(lVar9) != SEXT816(lVar7) * SEXT816(lVar12)) goto LAB_00100348;
      goto LAB_0010028d;
    }
    break;
  case 0x20:
    lVar6 = lVar10 * 0x200;
    if (SEXT816(lVar6) != SEXT816(lVar10) * SEXT416(0x200)) goto LAB_0010037d;
  case 0x21:
    goto switchD_00100194_caseD_21;
  case 0x35:
    lVar6 = lVar10 * 2;
    if (SEXT816(lVar6) != SEXT816(lVar10) * SEXT816(2)) goto LAB_0010037d;
    goto switchD_00100194_caseD_21;
  }
  uVar4 = 1;
  if (lVar10 < 0) {
    lVar6 = -0x8000000000000000;
  }
  else {
    lVar6 = 0x7fffffffffffffff;
  }
LAB_0010023d:
  uVar13 = uVar13 | uVar4;
switchD_00100194_caseD_21:
  *param_2 = (long)(pbVar3 + lVar11);
  if (pbVar3[lVar11] != 0) {
    uVar13 = uVar13 | 2;
  }
LAB_0010007f:
  *param_4 = lVar6;
LAB_00100082:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


