
/* WARNING: Unknown calling convention */

strtol_error xstrtoumax(char *nptr,char **endptr,int base,uintmax_t *val,char *valid_suffixes)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  ushort **ppuVar29;
  char *pcVar30;
  int *piVar31;
  ulong uVar32;
  ulong uVar33;
  int iVar34;
  int iVar35;
  strtol_error sVar36;
  strtol_error err;
  uintmax_t uVar37;
  strtol_error sVar38;
  long in_FS_OFFSET;
  bool bVar39;
  char *t_ptr;
  long local_40;
  
  bVar1 = *nptr;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (endptr == (char **)0x0) {
    endptr = &t_ptr;
  }
  ppuVar29 = __ctype_b_loc();
  bVar2 = *(byte *)((long)*ppuVar29 + (ulong)bVar1 * 2 + 1);
  pcVar30 = nptr;
  while ((bVar2 & 0x20) != 0) {
    bVar1 = pcVar30[1];
    pcVar30 = pcVar30 + 1;
    bVar2 = *(byte *)((long)*ppuVar29 + (ulong)bVar1 * 2 + 1);
  }
  if (bVar1 == 0x2d) {
    *endptr = nptr;
LAB_001001a3:
    sVar38 = LONGINT_INVALID;
    goto LAB_001000c2;
  }
  piVar31 = __errno_location();
  *piVar31 = 0;
  uVar32 = __isoc23_strtoumax(nptr,endptr,base);
  pbVar3 = (byte *)*endptr;
  if (pbVar3 != (byte *)nptr) {
    if (*piVar31 == 0) {
      sVar36 = LONGINT_OK;
      sVar38 = LONGINT_OK;
    }
    else {
      sVar36 = LONGINT_OVERFLOW;
      sVar38 = LONGINT_OVERFLOW;
      if (*piVar31 != 0x22) goto LAB_001001a3;
    }
    if ((valid_suffixes != (char *)0x0) && (bVar1 = *pbVar3, bVar1 != 0)) {
      pcVar30 = strchr(valid_suffixes,(int)(char)bVar1);
      uVar37 = uVar32;
      if (pcVar30 != (char *)0x0) goto LAB_0010013a;
switchD_001001d5_caseD_1:
      *val = uVar37;
      sVar38 = sVar38 | LONGINT_INVALID_SUFFIX_CHAR;
      goto LAB_001000c2;
    }
    goto LAB_001000bf;
  }
  if (((valid_suffixes == (char *)0x0) || (bVar1 = *nptr, bVar1 == 0)) ||
     (pcVar30 = strchr(valid_suffixes,(int)(char)bVar1), pcVar30 == (char *)0x0)) goto LAB_001001a3;
  sVar36 = LONGINT_OK;
  sVar38 = LONGINT_OK;
  uVar37 = 1;
LAB_0010013a:
  uVar28 = bVar1 - 0x45;
  if ((((byte)uVar28 < 0x30) && ((0x81440030b945U >> ((ulong)uVar28 & 0x3f) & 1) != 0)) &&
     (pcVar30 = strchr(valid_suffixes,0x30), pcVar30 != (char *)0x0)) {
    bVar2 = pbVar3[1];
    if (bVar2 == 0x44) {
      iVar34 = 2;
      uVar33 = 1000;
    }
    else if (bVar2 == 0x69) {
      uVar33 = 0x400;
      iVar34 = (pbVar3[2] == 0x42) + 1 + (uint)(pbVar3[2] == 0x42);
    }
    else {
      uVar33 = 0x400;
      iVar34 = (bVar2 == 0x42) + 1;
      if (bVar2 == 0x42) {
        uVar33 = 1000;
      }
    }
  }
  else {
    iVar34 = 1;
    uVar33 = 0x400;
  }
  uVar32 = uVar37;
  switch(bVar1 - 0x42 & 0xff) {
  case 0:
    uVar32 = uVar37 << 10;
    sVar38 = sVar36;
    if (uVar37 >> 0x36 != 0) {
      uVar32 = 0xffffffffffffffff;
      sVar38 = LONGINT_OVERFLOW;
    }
    goto switchD_001001d5_caseD_21;
  default:
    goto switchD_001001d5_caseD_1;
  case 3:
    iVar35 = 6;
    sVar36 = LONGINT_OK;
    do {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar37;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar33;
      uVar37 = SUB168(auVar12 * auVar24,0);
      if (SUB168(auVar12 * auVar24,8) != 0) {
        sVar36 = LONGINT_OVERFLOW;
        uVar37 = 0xffffffffffffffff;
      }
      iVar35 = iVar35 + -1;
    } while (iVar35 != 0);
    break;
  case 5:
  case 0x25:
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar37;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar33;
    uVar32 = SUB168(auVar5 * auVar17,0);
    bVar39 = SUB168(auVar5 * auVar17,8) != 0;
    if (bVar39) {
      uVar32 = 0xffffffffffffffff;
    }
    sVar36 = (strtol_error)bVar39;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar32;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar33;
    uVar32 = SUB168(auVar6 * auVar18,0);
    if (SUB168(auVar6 * auVar18,8) != 0) {
      sVar36 = LONGINT_OVERFLOW;
      uVar32 = 0xffffffffffffffff;
    }
    goto LAB_0010026e;
  case 9:
  case 0x29:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (long)(int)uVar33;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar37;
    uVar32 = SUB168(auVar4 * auVar16,0);
    if (SUB168(auVar4 * auVar16,8) != 0) {
      uVar32 = 0xffffffffffffffff;
      sVar38 = LONGINT_OVERFLOW;
    }
    goto switchD_001001d5_caseD_21;
  case 0xb:
  case 0x2b:
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar37;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar33;
    uVar32 = SUB168(auVar8 * auVar20,0);
    if (SUB168(auVar8 * auVar20,8) == 0) {
      sVar36 = LONGINT_OK;
    }
    else {
      uVar32 = 0xffffffffffffffff;
      sVar36 = LONGINT_OVERFLOW;
    }
LAB_0010026e:
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar33;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar32;
    uVar32 = SUB168(auVar7 * auVar19,0);
    if (SUB168(auVar7 * auVar19,8) != 0) {
      sVar36 = LONGINT_OVERFLOW;
      uVar32 = 0xffffffffffffffff;
    }
    sVar38 = sVar38 | sVar36;
    goto switchD_001001d5_caseD_21;
  case 0xe:
    iVar35 = 5;
    sVar36 = LONGINT_OK;
    do {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar37;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar33;
      uVar37 = SUB168(auVar13 * auVar25,0);
      if (SUB168(auVar13 * auVar25,8) != 0) {
        sVar36 = LONGINT_OVERFLOW;
        uVar37 = 0xffffffffffffffff;
      }
      iVar35 = iVar35 + -1;
    } while (iVar35 != 0);
    break;
  case 0xf:
    iVar35 = 10;
    sVar36 = LONGINT_OK;
    do {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar37;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar33;
      uVar37 = SUB168(auVar15 * auVar27,0);
      if (SUB168(auVar15 * auVar27,8) != 0) {
        sVar36 = LONGINT_OVERFLOW;
        uVar37 = 0xffffffffffffffff;
      }
      iVar35 = iVar35 + -1;
    } while (iVar35 != 0);
    break;
  case 0x10:
    iVar35 = 9;
    sVar36 = LONGINT_OK;
    do {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar37;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar33;
      uVar37 = SUB168(auVar14 * auVar26,0);
      if (SUB168(auVar14 * auVar26,8) != 0) {
        sVar36 = LONGINT_OVERFLOW;
        uVar37 = 0xffffffffffffffff;
      }
      iVar35 = iVar35 + -1;
    } while (iVar35 != 0);
    break;
  case 0x12:
  case 0x32:
    iVar35 = 4;
    sVar36 = LONGINT_OK;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar37;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar33;
      uVar37 = SUB168(auVar9 * auVar21,0);
      if (SUB168(auVar9 * auVar21,8) != 0) {
        sVar36 = LONGINT_OVERFLOW;
        uVar37 = 0xffffffffffffffff;
      }
      iVar35 = iVar35 + -1;
    } while (iVar35 != 0);
    break;
  case 0x17:
    iVar35 = 8;
    sVar36 = LONGINT_OK;
    do {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar37;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar33;
      uVar37 = SUB168(auVar11 * auVar23,0);
      if (SUB168(auVar11 * auVar23,8) != 0) {
        sVar36 = LONGINT_OVERFLOW;
        uVar37 = 0xffffffffffffffff;
      }
      iVar35 = iVar35 + -1;
    } while (iVar35 != 0);
    break;
  case 0x18:
    iVar35 = 7;
    sVar36 = LONGINT_OK;
    do {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar37;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar33;
      uVar37 = SUB168(auVar10 * auVar22,0);
      if (SUB168(auVar10 * auVar22,8) != 0) {
        sVar36 = LONGINT_OVERFLOW;
        uVar37 = 0xffffffffffffffff;
      }
      iVar35 = iVar35 + -1;
    } while (iVar35 != 0);
    break;
  case 0x20:
    uVar32 = uVar37 << 9;
    sVar38 = sVar36;
    if (uVar37 >> 0x37 != 0) {
      uVar32 = 0xffffffffffffffff;
      sVar38 = LONGINT_OVERFLOW;
    }
  case 0x21:
    goto switchD_001001d5_caseD_21;
  case 0x35:
    uVar32 = uVar37 * 2;
    sVar38 = sVar36;
    if ((long)uVar37 < 0) {
      uVar32 = 0xffffffffffffffff;
      sVar38 = LONGINT_OVERFLOW;
    }
    goto switchD_001001d5_caseD_21;
  }
  uVar32 = uVar37;
  sVar38 = sVar38 | sVar36;
switchD_001001d5_caseD_21:
  *endptr = (char *)(pbVar3 + iVar34);
  if (pbVar3[iVar34] != 0) {
    sVar38 = sVar38 | LONGINT_INVALID_SUFFIX_CHAR;
  }
LAB_001000bf:
  *val = uVar32;
LAB_001000c2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar38;
}


