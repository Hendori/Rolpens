
byte xstrtoumax(byte *param_1,undefined8 *param_2,undefined4 param_3,ulong *param_4,char *param_5)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar26;
  ushort **ppuVar27;
  byte *pbVar28;
  int *piVar29;
  ulong uVar30;
  char *pcVar31;
  ulong uVar32;
  int iVar33;
  int iVar34;
  byte bVar35;
  ulong uVar36;
  byte bVar37;
  long in_FS_OFFSET;
  bool bVar38;
  undefined8 local_48;
  long local_40;
  
  bVar37 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (undefined8 *)0x0) {
    param_2 = &local_48;
  }
  ppuVar27 = __ctype_b_loc();
  bVar35 = *(byte *)((long)*ppuVar27 + (ulong)bVar37 * 2 + 1);
  pbVar28 = param_1;
  while ((bVar35 & 0x20) != 0) {
    bVar37 = pbVar28[1];
    pbVar28 = pbVar28 + 1;
    bVar35 = *(byte *)((long)*ppuVar27 + (ulong)bVar37 * 2 + 1);
  }
  if (bVar37 == 0x2d) {
    *param_2 = param_1;
LAB_001001a3:
    bVar37 = 4;
    goto LAB_001000c2;
  }
  piVar29 = __errno_location();
  *piVar29 = 0;
  uVar30 = __isoc23_strtoumax(param_1,param_2,param_3);
  pbVar28 = (byte *)*param_2;
  if (pbVar28 != param_1) {
    if (*piVar29 == 0) {
      bVar37 = 0;
    }
    else {
      bVar37 = 1;
      if (*piVar29 != 0x22) goto LAB_001001a3;
    }
    if ((param_5 != (char *)0x0) && (bVar35 = *pbVar28, bVar35 != 0)) {
      pcVar31 = strchr(param_5,(int)(char)bVar35);
      uVar36 = uVar30;
      if (pcVar31 != (char *)0x0) goto LAB_0010013a;
switchD_001001d5_caseD_1:
      *param_4 = uVar36;
      bVar37 = bVar37 | 2;
      goto LAB_001000c2;
    }
    goto LAB_001000bf;
  }
  if (((param_5 == (char *)0x0) || (bVar35 = *param_1, bVar35 == 0)) ||
     (pcVar31 = strchr(param_5,(int)(char)bVar35), pcVar31 == (char *)0x0)) goto LAB_001001a3;
  bVar37 = 0;
  uVar36 = 1;
LAB_0010013a:
  uVar26 = bVar35 - 0x45;
  if ((((byte)uVar26 < 0x30) && ((0x81440030b945U >> ((ulong)uVar26 & 0x3f) & 1) != 0)) &&
     (pcVar31 = strchr(param_5,0x30), pcVar31 != (char *)0x0)) {
    bVar1 = pbVar28[1];
    if (bVar1 == 0x44) {
      iVar33 = 2;
      uVar32 = 1000;
    }
    else if (bVar1 == 0x69) {
      uVar32 = 0x400;
      iVar33 = (pbVar28[2] == 0x42) + 1 + (uint)(pbVar28[2] == 0x42);
    }
    else {
      uVar32 = 0x400;
      iVar33 = (bVar1 == 0x42) + 1;
      if (bVar1 == 0x42) {
        uVar32 = 1000;
      }
    }
  }
  else {
    iVar33 = 1;
    uVar32 = 0x400;
  }
  uVar30 = uVar36;
  switch(bVar35 - 0x42 & 0xff) {
  case 0:
    uVar30 = uVar36 << 10;
    if (uVar36 >> 0x36 != 0) {
      bVar37 = 1;
      uVar30 = 0xffffffffffffffff;
    }
    goto switchD_001001d5_caseD_21;
  default:
    goto switchD_001001d5_caseD_1;
  case 3:
    iVar34 = 6;
    bVar35 = 0;
    do {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar36;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar32;
      uVar36 = SUB168(auVar10 * auVar22,0);
      if (SUB168(auVar10 * auVar22,8) != 0) {
        bVar35 = 1;
        uVar36 = 0xffffffffffffffff;
      }
      iVar34 = iVar34 + -1;
    } while (iVar34 != 0);
    break;
  case 5:
  case 0x25:
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar36;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar32;
    uVar30 = SUB168(auVar3 * auVar15,0);
    bVar38 = SUB168(auVar3 * auVar15,8) != 0;
    if (bVar38) {
      uVar30 = 0xffffffffffffffff;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar30;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar32;
    uVar30 = SUB168(auVar4 * auVar16,0);
    if (SUB168(auVar4 * auVar16,8) != 0) {
      bVar38 = true;
      uVar30 = 0xffffffffffffffff;
    }
    goto LAB_0010026e;
  case 9:
  case 0x29:
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (long)(int)uVar32;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar36;
    uVar30 = SUB168(auVar2 * auVar14,0);
    if (SUB168(auVar2 * auVar14,8) != 0) {
      bVar37 = 1;
      uVar30 = 0xffffffffffffffff;
    }
    goto switchD_001001d5_caseD_21;
  case 0xb:
  case 0x2b:
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar36;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar32;
    uVar30 = SUB168(auVar6 * auVar18,0);
    if (SUB168(auVar6 * auVar18,8) == 0) {
      bVar38 = false;
    }
    else {
      uVar30 = 0xffffffffffffffff;
      bVar38 = true;
    }
LAB_0010026e:
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar32;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar30;
    uVar30 = SUB168(auVar5 * auVar17,0);
    if (SUB168(auVar5 * auVar17,8) != 0) {
      bVar38 = true;
      uVar30 = 0xffffffffffffffff;
    }
    bVar37 = bVar37 | bVar38;
    goto switchD_001001d5_caseD_21;
  case 0xe:
    iVar34 = 5;
    bVar35 = 0;
    do {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar36;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar32;
      uVar36 = SUB168(auVar11 * auVar23,0);
      if (SUB168(auVar11 * auVar23,8) != 0) {
        bVar35 = 1;
        uVar36 = 0xffffffffffffffff;
      }
      iVar34 = iVar34 + -1;
    } while (iVar34 != 0);
    break;
  case 0xf:
    iVar34 = 10;
    bVar35 = 0;
    do {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar36;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar32;
      uVar36 = SUB168(auVar13 * auVar25,0);
      if (SUB168(auVar13 * auVar25,8) != 0) {
        bVar35 = 1;
        uVar36 = 0xffffffffffffffff;
      }
      iVar34 = iVar34 + -1;
    } while (iVar34 != 0);
    break;
  case 0x10:
    iVar34 = 9;
    bVar35 = 0;
    do {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar36;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar32;
      uVar36 = SUB168(auVar12 * auVar24,0);
      if (SUB168(auVar12 * auVar24,8) != 0) {
        bVar35 = 1;
        uVar36 = 0xffffffffffffffff;
      }
      iVar34 = iVar34 + -1;
    } while (iVar34 != 0);
    break;
  case 0x12:
  case 0x32:
    iVar34 = 4;
    bVar35 = 0;
    do {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar36;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar32;
      uVar36 = SUB168(auVar7 * auVar19,0);
      if (SUB168(auVar7 * auVar19,8) != 0) {
        bVar35 = 1;
        uVar36 = 0xffffffffffffffff;
      }
      iVar34 = iVar34 + -1;
    } while (iVar34 != 0);
    break;
  case 0x17:
    iVar34 = 8;
    bVar35 = 0;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar36;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar32;
      uVar36 = SUB168(auVar9 * auVar21,0);
      if (SUB168(auVar9 * auVar21,8) != 0) {
        bVar35 = 1;
        uVar36 = 0xffffffffffffffff;
      }
      iVar34 = iVar34 + -1;
    } while (iVar34 != 0);
    break;
  case 0x18:
    iVar34 = 7;
    bVar35 = 0;
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar36;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar32;
      uVar36 = SUB168(auVar8 * auVar20,0);
      if (SUB168(auVar8 * auVar20,8) != 0) {
        bVar35 = 1;
        uVar36 = 0xffffffffffffffff;
      }
      iVar34 = iVar34 + -1;
    } while (iVar34 != 0);
    break;
  case 0x20:
    uVar30 = uVar36 << 9;
    if (uVar36 >> 0x37 != 0) {
      bVar37 = 1;
      uVar30 = 0xffffffffffffffff;
    }
  case 0x21:
    goto switchD_001001d5_caseD_21;
  case 0x35:
    uVar30 = uVar36 * 2;
    if ((long)uVar36 < 0) {
      bVar37 = 1;
      uVar30 = 0xffffffffffffffff;
    }
    goto switchD_001001d5_caseD_21;
  }
  bVar37 = bVar37 | bVar35;
  uVar30 = uVar36;
switchD_001001d5_caseD_21:
  *param_2 = pbVar28 + iVar33;
  if (pbVar28[iVar33] != 0) {
    bVar37 = bVar37 | 2;
  }
LAB_001000bf:
  *param_4 = uVar30;
LAB_001000c2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar37;
}


